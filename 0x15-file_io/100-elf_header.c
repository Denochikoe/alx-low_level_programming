#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <errno.h>
#include <string.h>

void print_error_and_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void print_elf_header(const char *filename)
{
	int fd;
	unsigned char e_ident[EI_NIDENT];
	int is_64bit;
	int i;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		print_error_and_exit("Error opening file");
	}

	if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT)
	{
		close(fd);
		print_error_and_exit("Error reading ELF identification");
	}

	if (memcmp(e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(fd);
		print_error_and_exit("Not an ELF file");
	}

	is_64bit = (e_ident[EI_CLASS] == ELFCLASS64);

	if (lseek(fd, 0, SEEK_SET) == (off_t) -1)
	{
		close(fd);
		print_error_and_exit("Error seeking in file");
	}

	if (is_64bit)
	{
		Elf64_Ehdr ehdr;

		if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		{
			close(fd);
			print_error_and_exit("Error reading ELF header");
		}
		printf("Magic:  ");
		for (i = 0; i < EI_NIDENT; i++)
		{
			printf("%02x ", ehdr.e_ident[i]);
		}
		printf("\nClass:			ELF64\n");
		printf("Data:			%s\n", (ehdr.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
		printf("Version:		%d (current)\n", ehdr.e_ident[EI_VERSION]);
		printf("OS/ABI:			%d\n", ehdr.e_ident[EI_OSABI]);
		printf("ABI Version:		%d\n", ehdr.e_ident[EI_ABIVERSION]);
		printf("Type:			0x%x\n", ehdr.e_type);
		printf("Entry point address:			0x%lx\n", ehdr.e_entry);
	}
	else
	{
		Elf32_Ehdr ehdr;
		if (read(fd, &ehdr, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
		{
			close(fd);
			print_error_and_exit("Error reading ELF header");
		}

		printf("Magic:	");
		for (i = 0; i < EI_NIDENT; i++)
		{
			printf("%02x ", ehdr.e_ident[i]);
		}
		printf("\nClass:			ELF32\n");
		printf("Data:				%s\n", (ehdr.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
		printf("Version:			%d (current)\n", ehdr.e_ident[EI_VERSION]);
		printf("OS/ABI:				%d\n", ehdr.e_ident[EI_OSABI]);
		printf("ABI Version:			%d\n", ehdr.e_ident[EI_ABIVERSION]);
		printf("Type:				0x%x\n", ehdr.e_type);
		printf("Entry point address:		0x%x\n", ehdr.e_entry);
}
close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error_and_exit("Usage: elf_header elf_filename");
	}
	print_elf_header(argv[1]);
	return 0;
}

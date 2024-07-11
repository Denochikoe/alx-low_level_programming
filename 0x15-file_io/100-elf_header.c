#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <errno.h>
#include <string.h>
void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}
void print_elf_header(Elf64_Ehdr ehdr)
{
	int i;

	printf("Magic:	");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr.e_ident[i]);
	}
	printf("\n");


	printf("Class:				");
	switch (ehdr.e_ident[EI_CLASS]) {
		case ELFCLASSNONE: printf("Invalid class\n"); break;
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default:	printf("Unknown class\n"); break;
}

printf("Data:			");
switch (ehdr.e_ident[EI_DATA]) {
	case ELFDATANONE: printf("Invalid data encoding\n"); break;
	case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
	case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
	default:	printf("Unknown data format\n"); break;
}
printf("Version:			%d (current)\n", ehdr.e_ident[EI_VERSION]);
printf("OS/ABI:			");
switch (ehdr.e_ident[EI_OSABI]) {
	case ELFOSABI_NONE:	printf("UNIX - System V\n"); break;
	case ELFOSABI_HPUX:	printf("UNIX - HP-UX\n"); break;
	case ELFOSABI_NETBSD:	printf("UNIX - NetBSD\n"); break;
	case ELFOSABI_LINUX:	printf("UNIX - Linux\n"); break;
	case ELFOSABI_SOLARIS:	printf("UNIX - Solaris\n"); break;
	case ELFOSABI_IRIX:	printf("UNIX - IRIX\n"); break;
	case ELFOSABI_FREEBSD:	printf("UNIX - FreeBSD\n"); break;
	case ELFOSABI_TRU64:	printf("UNIX - TRU64\n"); break;
	case ELFOSABI_ARM:	printf("ARM\n"); break;
	case ELFOSABI_STANDALONE: printf("Standalone (embedded)\n"); break;
	default:		printf("Unknown OS/ABI\n");
}
printf("ABI Version:			%d\n", ehdr.e_ident[EI_ABIVERSION]);
printf("Type:			");
switch (ehdr.e_type) {
	case ET_NONE:	printf("NONE (No file type)\n"); break;
	case ET_REL:	printf("REL (Relocated file)\n"); break;
	case ET_EXEC:	printf("EXEC (Executable file)\n"); break;
	case ET_DYN:	printf("DYN (Shared object file\n"); break;
	case ET_CORE:	printf("CORE (Core file)\n"); break;
	default:	printf("Unknown type\n"); break;
	}
	printf("Entry point address:		0x%lx\n", (unsigned long)ehdr.e_entry);
}
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2) {
		print_error("Usage: elf_header elf_filename");
}
filename = argv[1];

fd = open(filename, O_RDONLY);
if (fd == -1)
{
	print_error(strerror(errno));
}
if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
{
	close(fd);
	print_error("Error reading ELF header");
}
if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
	close(fd);
	print_error("Not an ELF file");
}
print_elf_header(ehdr);
close(fd);
return 0;
}

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool is_palindrome(int number) {
    int original = number, reversed = 0, remainder;
    while (number > 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    return original == reversed;
}

int main() {
    int max_palindrome = 0;

    // Iterate through all pairs of 3-digit numbers
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    // Write the result to a file
    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", max_palindrome);
        fclose(file);
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}


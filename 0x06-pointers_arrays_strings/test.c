#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: A pointer to the buffer.
 * @size: The number of bytes to print from the buffer.
 */
void print_buffer(char *b, int size) {
    int o, j, i;
    o = 0;

    // If size is 0 or less, print a newline and return.
    if (size <= 0) {
        printf("\n");
        return;
    }

    while (o < size) {
        // Calculate how many bytes to print in this iteration (up to 10 bytes).
        j = (size - o < 10) ? size - o : 10;

        // Print the offset in hexadecimal format with 8 characters (padded with zeros).
        printf("%08x: ", o);

        for (i = 0; i < 10; i++) {
            if (i < j) {
                // Print the byte in hexadecimal format with two characters (padded with zeros).
                printf("%02x", *(b + o + i));
            } else {
                printf("  ");  // Print two spaces for unused positions.
            }

            if (i % 2) {
                printf(" ");  // Add a space between each pair of hexadecimal values.
            }
        }

        for (i = 0; i < j; i++) {
            int c = *(b + o + i);
            if (c < 32 || c > 126) {
                c = '.';  // Replace non-printable characters with a period.
            }
            printf("%c", c);  // Print the corresponding ASCII character or '.' if not printable.
        }

        printf("\n");  // Add a newline to end the line.
        o += 10;  // Move to the next 10-byte block in the buffer.
    }
}


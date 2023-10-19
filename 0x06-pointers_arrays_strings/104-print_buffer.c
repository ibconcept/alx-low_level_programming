#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in the specified format.
 * @b: A pointer to the buffer.
 * @size: The number of bytes to print from the buffer.
 */
void print_buffer(char *b, int size) {
    int i, j, o;

    o = 0;
    
    if (size <= 0) {
        printf("\n");
        return;
    }
    
    while (o < size) {
        j = (size - o < 10) ? size - o : 10;
        
        // Print the offset in hexadecimal format with 8 characters (padded with zeros).
        printf("%08x: ", o);
        
        for (i = 0; i < 10; i++) {
            if (i < j) {
                // Print the byte in hexadecimal format with two characters (padded with zeros).
                printf("%02x", b[o + i]);
            } else {
                printf("  ");  // Print two spaces for unused positions.
            }
            
            if (i % 2) {
                printf(" ");  // Add a space between each pair of hexadecimal values.
            }
        }
        
        for (i = 0; i < j; i++) {
            // Print the corresponding ASCII character or '.' if not printable.
            char c = b[o + i];
            if (c < 32 || c > 126) {
                printf(".");
            } else {
                printf("%c", c);
            }
        }
        
        printf("\n");  // Add a newline to end the line.
        o += 10;
    }
}


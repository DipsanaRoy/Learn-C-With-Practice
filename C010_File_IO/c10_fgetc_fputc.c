// C10. 'fgetc' and 'fputc' demonstration.
#include <stdio.h>

int main()
{
    // Init: File Pointer
    FILE *ptr;

    // 'Open' another file in 'write' mode
    ptr = fopen("demo.txt", "w");

    // Put characters in the file
    putc('H', ptr);
    putc('i', ptr);
    putc('!', ptr);
    putc(' ', ptr);
    putc('0', ptr);
    putc('1', ptr);

    // Rewinds the file pointer to start before reading
    rewind(ptr);

    // 'Open' a file in 'read' mode
    ptr = fopen("demo.txt", "r");

    char c = fgetc(ptr); // get first character from the file
    printf("\nFirst character from the file: %c\n", c);

    puts("Printing file contents character-wise");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%c\n", fgetc(ptr));
    }

    fclose(ptr); // close the file
    return 0;
}
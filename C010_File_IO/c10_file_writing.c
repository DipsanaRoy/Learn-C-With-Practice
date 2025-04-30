// C10. Write to a file
#include<stdio.h>

int main()
{
    // Init: number
    int number = 45;

    // Open "generated.txt" in 'write' mode
    FILE *fptr = fopen("generated.txt", "w");

    // Write to file: fprintf(file_pointer, ...like printf...)
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf", number);

    fclose(fptr); // Close file (fptr)
    return 0;
}
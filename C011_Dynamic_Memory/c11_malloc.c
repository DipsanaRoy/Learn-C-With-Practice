// C11. Use malloc function 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Init: Dynamic Arrays and their User-defined size
    int *ptr1, *ptr2, size;

    printf("\nHow many integers you want to store?: ");
    scanf("%zu", &size);

    ptr1 = (int *)malloc(size * 4);           // Don't assume size of int is 4 bytes as it could be different in other architectures
    ptr2 = (int *)malloc(size * sizeof(int)); // Always use `sizeof()` function

    puts("\nEnter ptr2 elements");
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element |%3d|:", i + 1);
        scanf("%d", &ptr2[i]);
    }

    // uninitialized malloc has random garbage values
    puts("\nptr1 values:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%3d|: %d\n", i + 1, ptr1[i]);
    }

    puts("\nptr2 values:");
    for (size_t i = 0; i < size; i++)
    {
        printf("Element |%3d|: %d\n", i + 1, ptr2[i]);
    }
    
    free(ptr1);
    free(ptr2);
    return 0;
}
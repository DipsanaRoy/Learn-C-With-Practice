// CP11. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70).
// Use realloc to make it store 15 numbers (from 7 x 1 to 7 x 15).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Init: multipliers & tables
    int m = 10;
    int *t = (int *)malloc(m * sizeof(int));
    if (t == NULL)
    {
        puts("\nMemory allocation failed!");
        return 1;
    }
    
    puts("\nBefore Reallocating:");
    for (int i = 0; i < m; i++)
    {
        t[i] = 7 * (i + 1);
        printf("7 x %d = %d\n", i + 1, t[i]);
    }
    
    // Reallocate memory to store 15 multipliers
    m = 15;
    t = realloc(t, m * sizeof(int));
    if (t == NULL)
    {
        puts("\nMemory allocation failed!");
        return 1;
    }
    
    puts("\nAfter Reallocating:");
    for (int i = 10; i < m; i++)
    {
        t[i] = 7 * (i + 1);
        printf("7 x %d = %d\n", i + 1, t[i]);
    }
    free(t);
    return 0;
}
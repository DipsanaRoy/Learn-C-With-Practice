// CP3. Find greatest of four numbers entered by the user
#include <stdio.h>

int main()
{
    int a, b, c, d; // Initialize four numbers

    puts("\nEnter any four numbers one by one");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int greatest = a; // stores greatest value

    if (b > greatest)
    {
        greatest = b;
    }
    if (c > greatest)
    {
        greatest = c;
    }
    if (d > greatest)
    {
        greatest = d;
    }

    printf("\n%d is the greatest!\n", greatest);
    return 0;
}
// C9. Store 3 employee details from user-defined data using structures
#include <stdio.h>
#include <string.h>

// Structure data type
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    // Init: 3 facebook employees by arrays
    struct employee facebook[3];
    
    // Input: employee details
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Employee |%d| Name: ", i + 1);
        scanf(" %20[^\n]", facebook[i].name);

        printf("Enter Employee |%d| Code: ", i + 1);
        scanf("%d", &facebook[i].code);

        printf("Enter Employee |%d| Salary: ", i + 1);
        scanf("%f", &facebook[i].salary);

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF); // Clear input buffer
    }

    // Output: employee details
    puts("*********************************************************");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEmployee |%d| Name: %s", i + 1, facebook[i].name);
        printf("\nCode: %d", facebook[i].code);
        printf("\nSalary: %.2f\n", facebook[i].salary);
    }
    return 0;
}
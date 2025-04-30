// CP10. Take name and salary of 2 employees as user input and write them to a text file in the following format:
// name 1, salary
// name 2, salary

#include <stdio.h>
#include <string.h>

// Struct variable employee
typedef struct employee
{
    char name[30];
    int salary;
} emp;

// Function Prototype
void inputEmp(emp e[], int n);

int main()
{
    FILE *ptr; // File Pointer
    size_t n;  // no. of employees

    // I/p: Employee Details
    printf("\nHow many employees you want to enter?: ");
    scanf("%zu", &n);
    emp e[n];
    inputEmp(e, n);

    // Create emp no. based dynamic file
    char filename[20];
    snprintf(filename, sizeof(filename), "emp%d.txt", n);
    ptr = fopen(filename, "w");

    // Write employee details to the file
    fprintf(ptr, "'%d' employee details are:\n", n);
    for (int i = 0; i < n; i++)
        fprintf(ptr, "%s, %d\n", e[i].name, e[i].salary);

    fclose(ptr);
    printf("\nSaved '%d' employee details to 'emp%d.txt'!\n", n, n);
    return 0;
}

// Function Definition
void inputEmp(emp e[], int n)
{
    puts("\nEnter the employee details one by one!");
    for (int i = 0; i < n; i++)
    {
        for (int c = getchar(); c != '\n' && c != EOF; c = getchar()); // clear input buffer
        printf("\nEnter Employee %d| name: ", i + 1);

        if (fgets(e[i].name, sizeof(e[i].name), stdin) != NULL)
            e[i].name[strcspn(e[i].name, "\n")] = '\0'; // remove '\n' at end

        printf("Enter Employee %d| salary: ", i + 1);
        scanf("%d", &e[i].salary);
    }
}
// C3. Find grade of a student by their marks
#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("\nEnter the marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;

    default:
        grade = 'F';
        break;
    }
    (marks < 101) ? printf("The grade of the student is %c\n", grade) : puts("Invalid Input!\n");

    return 0;
}
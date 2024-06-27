#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Create 3 arrays (names, ages, genders) which each array have 5 elements to store information 5
students. Ensure that the information for each student is aligned across the arrays. For example,
names[0], ages[0], and genders[0] should correspond to the first student. Print all student
information in a formatted table.*/

int main()
{
    char name[5][20], gender[5][10];
    int ages[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Information of Student %d\n", i + 1);
        printf("Name : ");
        fgets(name[i], 20, stdin);
        name[i][strcspn(name[i], "\n")] = '\0'; // remove newline form name
        printf("Age : ");
        scanf("%d", &ages[i]);
        getchar(); // consume a newline
        printf("Gender : ");
        fgets(gender[i], 10, stdin);
        gender[i][strcspn(gender[i], "\n")] = '\0';
    }

    printf("~~~~~Table of students information~~~~~\n");
    printf("%-17s %-10s %s\n", "Name", "Age", "Gender");

    for (int i = 0; i < 5; i++)
    {
        printf("%-17s %-10d %s\n", name[i], ages[i], gender[i]);
    }

    return 0;
}
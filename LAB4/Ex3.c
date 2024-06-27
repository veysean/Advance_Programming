#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2, *file3;
    char FirstFile[10];
    char SecondFile[10];
    char ConcateFile[10];

    printf("Enter name of the first file : ");
    scanf("%s", FirstFile);

    // open first file for reading
    file1 = fopen(FirstFile, "r");
    if (file1 == NULL)
    {
        printf("Error! Could not find this file!!");
        exit(1);
    }

    printf("Enter the name of the second file : ");
    scanf("%s", SecondFile);

    // open second file for reading
    file2 = fopen(SecondFile, "r");
    if (file2 == NULL)
    {
        printf("Error! Could not find this file!!");
        exit(1);
    }

    // open concate file for writing
    file3 = fopen(ConcateFile, "w");
    if (file3 == NULL)
    {
        printf("Error! Could create this file!!");
        exit(1);
    }



    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1, *file2;
    char SourceFile[10];
    char DestinationFile[10];
    char c;

    printf("Enter the filename to open for reading: ");
    scanf("%s", SourceFile);

    // Open the source file for reading
    file1 = fopen(SourceFile, "r");
    if (file1 == NULL)
    {
        printf("Error! No source file name %s\n", SourceFile);
        exit(1);
    }

    printf("Enter the filename to open for writing: ");
    scanf("%s", DestinationFile);

    // If both files have the same name
    if (strcmp(SourceFile, DestinationFile) == 0)
    {
        printf("Error! The same name!!");
        exit(1);
    }

    // Open the destination file for writing
    file2 = fopen(DestinationFile, "w");
    if (file2 == NULL)
    {
        printf("Error! Cannot create destination file name %s\n", DestinationFile);
        exit(1);
    }

    // Read contents from the source file and write to the destination file
    while ((c = fgetc(file1)) != EOF)
    {
        fputc(c, file2);
    }

    printf("Contents copied to %s\n", DestinationFile);

    fclose(file2);
    fclose(file1);

    return 0;
}
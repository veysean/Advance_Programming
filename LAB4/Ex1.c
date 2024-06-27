#include <stdio.h>

int main()
{
    char content[50];

    FILE *file;

    file = fopen("Hello.txt", "r");
    if (file == NULL)
    {
        printf("File cannot be open!\n");
        return 1;
    }
    int i = 0;
    while (1)
    {
        char c = fgetc(file);
        if (c == EOF)
        {
            break;
        }
        content[i] = c;
        i++;
    }

    fclose(file);

    printf("%s", content);

    return 0;
}
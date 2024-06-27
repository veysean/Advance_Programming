#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Make a small program, allow user to input a string and change the input string
First character to ‘A’ and second character to ‘B’: Output – “ABiversity”
Change characters of 1st, 3rd, 5th, 7th … to ‘Z’: Output – “ZnZvZrZiZy”
Change characters of 2nd , 4th , 6th, 8th … to ‘X’: Output – “uXiXeXsXtX” */

int main()
{
    char string[10], copy[10];

    printf("Input some words here : ");
    scanf("%s", &string);
    strcpy(copy, string);

    // First character to 'A' and second to 'B'
    string[0] = 'A';
    string[1] = 'B';
    printf("%s\n", string);

    // odd index to 'Z'
    strcpy(string, copy);
    for (int i = 0; i < strlen(string); i += 2)
    {
        string[i] = 'Z';
    }
    printf("%s\n", string);

    // even index to 'X'
    strcpy(string, copy);
    for (int i = 1; i < strlen(string); i += 2)
    {
        string[i] = 'X';
    }
    printf("%s\n", string);

    return 0;
}
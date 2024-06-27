#include <stdio.h>
#include <string.h>

/*Write a small program that will capitalize all the letters of a string
Example: user input: “I Love Cambodia”, the program will convert to capitalize to “I LOVE CADBODIA” */

int main()
{
    char input[50];
    printf("Input the words : ");
    gets(input);

    puts(strupr(input));

    return 0;
}
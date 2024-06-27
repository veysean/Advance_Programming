
// Write a small program that counts the total numbers of vowels and their frequency.

#include <stdio.h>
#include <string.h>

int main()
{
    char input[20];
    int total = 0;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Input and words here : ");
    gets(input);
    strlwr(input);

    for (int j = 0; j < strlen(input); j++)
    {
        if (input[j] == 'a' || input[j] == 'e' || input[j] == 'i' || input[j] == 'o'|| input[j] == 'u')
        {
            total += 1;

            if (input[j] == 'a')
            {
                a++;
            }
            else if (input[j] == 'e')
            {
                e++;
            }
            else if (input[j] == 'i')
            {
                i++;
            }
            else if (input[j] == 'o')
            {
                o++;
            }
            else if (input[j] == 'u')
            {
                u++;
            }
        }
    }
    printf("Total of vowels is %d\n", total);
    printf("Frequency of 'a' or 'A' : %d\n", a);
    printf("Frequency of 'e' or 'E' : %d\n", e);
    printf("Frequency of 'i' or 'I' : %d\n", i);
    printf("Frequency of 'o' or 'O' : %d\n", o);
    printf("Frequency of 'u' or 'U' : %d\n", u);

    return 0;
}
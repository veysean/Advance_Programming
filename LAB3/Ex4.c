#include <stdio.h>
#include <string.h>

// Create 2 strings {‘h’,’e’,’l’,’l’,’o’,’\0’} and “CADT” then concatenate them after that print it.

int main()
{
    // Using function strcat()
    char s1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char s2[] = "CADT";

    strcat(s1, s2);

    printf("%s", s1);

    // Without using strcat()
    char str1[] = {'h', 'e', 'l', 'l', 'o', '\0'}, str2[] = "CADT";
    char str3[100];

    int i = 0, j = 0;

    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';

    printf("\n%s", str3);

    return 0;
}
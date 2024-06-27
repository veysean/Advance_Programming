#include <stdio.h>

int main()
{
    int arrayA[5];
    arrayA[0] = 10;
    arrayA[1] = 15;
    arrayA[2] = 20;
    arrayA[3] = 100;
    arrayA[4] = 30;
    printf("Value of array A.\n");
    for (int j=0;j<=4;j++)
    {
        printf("ArrayA[%d] = %d.\n",j,arrayA[j]);
    }

    printf("Value of array B (Reverse of A).\n");
    for (int i = 4; i >= 0; i--)
    {
        
        printf("ArrayB[%d] = %d\n",4-i, arrayA[i]);
    }

    return 0;
}

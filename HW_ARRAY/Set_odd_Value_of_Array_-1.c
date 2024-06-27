#include <stdio.h>

int main()
{
   
    int number_of_elements;
    printf("Enter the amount of elements in Array A : ");
    scanf("%d",&number_of_elements);
    int set_value_A[number_of_elements];
    printf("Set of array A.\n");
    for (int i=0;i<number_of_elements;i++)
    {
        printf("Aray A [%d] = ",i);
        scanf("%d",&set_value_A[i]);

    }
    printf("Set of array after change value of odd index to -1.\n");
    for (int j=0;j<number_of_elements;j++)
    {
        if (j%2 !=0)
        {
            set_value_A[j]=-1;
        }
        printf("Array A[%d]= %d\n",j,set_value_A[j]);
    }

    return 0;
}
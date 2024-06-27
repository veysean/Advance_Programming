#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float delta;
    float x1,x2;
    printf("Calculate the roots of Quadratic equation.\n");
    printf("Input constants of quadratic of equation (a) : ");
    scanf("%f",&a);
    printf("Input constants of quadratic of equation (b) : ");
    scanf("%f",&b);
    printf("Input constants of quadratic of equation (c) : ");
    scanf("%f",&c);
    
    printf("Calculate Delta of Quadratic equation.\n");
    delta =(pow(b,2)-(4*a*c));
    printf("Delta = %.2f\n",delta);

    if (a==0)
    {
        printf("a must be non-zero number.\n");
    }
    else
    {
        if (delta>0)
        {
            printf("There are two roots of equations.\n");
            x1=(- b - sqrt(delta))/(2*a);
            x2=(- b + sqrt(delta))/(2*a);
            printf("x1=%f\n",x1);
            printf("x2=%f\n",x2);
        }else if (delta==0)
        {
            printf("Equation have double roots.\n");
            x1=-b/(2*a);
            printf("x1=x2=%f",x1);
        }else{
            printf("There is no roots.\n");
        }
    }

    return 0;
}
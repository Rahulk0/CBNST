#include<stdlib.h>
#include<stdio.h>
#include<math.h>
double f(int x)
{
    return (x*x*x - 4*x - 9);
}

double X(double x)
{
    return (pow((4*x+9),(1.0/3.0)));
}

double dq(int x)
{
    return ( (4/3)*(pow((4*x+9),(-1.0/3.0))));
}

int main()
{
    double x,error,x1,x2;
    printf("Enter the initial value and Error : ");
    scanf("%lf",&x);
    scanf("%lf",&error);
    if(fabs(dq(x)) < 1)
    {
        printf("Case Satisfied...\n");
        x1 = x;
        while(1)
        {
            x2 = X(x1);
            printf("Value of F(%lf) : %lf\n",x1,x2);
            if(fabs(x1-x2)<=error)
            {
                printf("Root is : %lf\n",x1);
                exit(0);
            }
            x1 = x2;
        }
    }
    else
    {
        printf("Case Unsatisfied...Change the Function...\n");
    }
    return 0;
}
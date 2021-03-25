#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Display()
{
    printf("\nEquation is x*x*x - x - 1\n");
}
double Equation(double x)
{
    return (x*x*x - x - 1);
}

int main()
{
    int check=0,itr=0;
    double a,b,error,x;
    Display();
    while(check!=1)
    {
        printf("Enter the value of a and b : ");
        scanf("%lf%lf",&a,&b);
            if(Equation(a)*Equation(b) < 0)
            {
                check = 1;
                printf("Roots lies between %lf and %lf\n",a,b);
            }
            else
                printf("Wrong Intervals, Try Again!!!\n");

    }

    printf("Enter the allowed error : ");
    scanf("%lf",&error);

    while(1)
    {
        itr++;
        x = (a+b)/2;
        printf("\n%d Iteration, Value of x is %lf, Value of (%lf) is %lf",itr,x,x,Equation(x));
        if(fabs(Equation(x)) <= error)
        {
            printf("\n\nThe Roots of the equation is %lf after %d Iteration",x,itr);
            exit(0);
        }
        else if(Equation(a)*Equation(x) < 0)
            b = x;
        else
            a = x;
    }

return 0;
}
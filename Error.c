#include<stdio.h>
int main()
{
    double t_value, a_value, Absolute_Error, Relative_Error, Percentage_Error;
    printf("Enter True and Approximate value : ");
    scanf("%lf%lf", &t_value, &a_value);
    Absolute_Error   = t_value - a_value;
    Relative_Error   = (Absolute_Error/t_value);
    Percentage_Error = Relative_Error*100;
    printf("Absolute Error : %lf\nRelative Error : %lf\nPercentage Error : %lf\n\n",Absolute_Error, Relative_Error, Percentage_Error);
    return 0;
}
#include<stdio.h>
#include<math.h>
float val(float z,float d[],int n)
{
    float sum=0,k;
    int j;
    for(j=0;j<n;j++)
     {
         k=j;
         sum=sum+(d[j]*pow(z,k));
     }
     return sum;
}
void main()
{
    int n;
    printf("enter the degree of equation : ");
    scanf("%d",&n);
    n=n+1;
    float d[n];
    int i,j;
    printf("Enter the equation....................................");
    for(i=n-1;i>=0;i--)
    {
        printf("\nEnter the coefficients of x power %d : ",i);
        scanf("%f",&d[i]);
    }
    int m=n-1;
    float e[m];
    j=m-1;
    for(i=n-1;i>0;i--)
    {
        e[j]=i*d[i];
        j--;
    }
    printf("\nEnter the initial value of x : ");
    float xc,fxn,fdxn;
    scanf("%f",&xc);
    int itr;
    printf("\nEnter the number of iterations : ");
    scanf("%d",&itr);
    for(i=0;i<itr;i++)
    {
        fxn=val(xc,d,n);
        fdxn=val(xc,e,m);
        xc= xc-(fxn/fdxn);

    }
    printf("\nThe root of equation is %.3f",xc);
}

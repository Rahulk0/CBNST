
#include<stdio.h>

void display(int n, double a[][n+1])
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("\t");
        for(int j=0;j<n+1;j++)
        {
            printf("%15lf ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<86;i++)
        printf("*");
}

int main()
{
    // a1x + b1y + c1z = d1
    // a2x + b2y + c2z = d2
    // a3x + b3y + c3z = d3
    int n,i,j,k;;
    double rem;
    printf("\nEnter the order of Matrix : ");
    scanf("%d",&n);
    double a[n][n+1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("Enter A[%d][%d] : ",i+1,j+1);
            scanf("%lf",&a[i][j]);
        }
    }

    for(int i=0;i<86;i++)
        printf("*");
            printf("\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        { 
            if(j>i)
                {
                    rem = (a[j][i]/a[i][i]);
                    for(k=0;k<n+1;k++)
                    {
                        a[j][k] = a[j][k] - rem*a[i][k];
                        
                    }
                   
                } 
        }display(n,a);
    }
    printf("\nThe Upper Triangular Matrix is :- \n\n");
    for(int i=0;i<n;i++)
    {
        printf("\t");
        for(int j=0;j<n+1;j++)
        {
            printf("%15lf ",a[i][j]);
        }
        printf("\n");
    }

    double x[10],sum=0;
    x[n-1] = a[n-1][n]/a[n-1][n-1];

    for(i=n-2;i>=0;i--)
    {
        sum = 0;
        for(j=i+1;j<n;j++)
        {
            sum+=a[i][j]*x[j];
        }
        x[i] = (a[i][n]-sum)/a[i][i];
    }
printf("\nThe Solution is :- \n\n");
    for(i=0;i<n;i++)
    {
        printf("\nx%d = %lf\t",i+1,x[i]);
    }
    return 0;
}
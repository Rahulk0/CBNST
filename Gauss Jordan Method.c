#include<stdio.h>

void display(int n, double a[][n+1])
{
    for(int i=0;i<86;i++)
        printf("*");
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("\t");
        for(int j=1;j<=n+1;j++)
        {
            printf("%15lf ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // a1x + b1y + c1z = d1
    // a2x + b2y + c2z = d2
    // a3x + b3y + c3z = d3
    int n,i,j,k;
    double c;
    printf("\nEnter the order of Matrix : ");
    scanf("%d",&n);
    double a[n][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("Enter A[%d][%d] : ",i,j);
            scanf("%lf",&a[i][j]);
        }
    }


    
printf("\n");
   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            if(j!=i)
                {
                    c = (a[j][i]/a[i][i]);
                    for(k=1;k<=n+1;k++)
                    {
                        a[j][k] = a[j][k] - c*a[i][k];
                        
                    }
                   
                } 
        }display(n,a);
    }
    printf("\nThe Diagonal Matrix is :- \n\n");
    for(int i=1;i<=n;i++)
    {
        printf("\t");
        for(int j=1;j<=n+1;j++)
        {
            printf("%15lf ",a[i][j]);
        }
        printf("\n");
    }

    double x[10];
    x[n-1] = a[n-1][n]/a[n-1][n-1];

    for(i=1;i<=n;i++)
    {
        x[i] = a[i][n+1]/a[i][i];
        printf("\nx%d = %lf\t",i,x[i]);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    // a1x + b1y + c1z = d1
    // a2x + b2y + c2z = d2
    // a3x + b3y + c3z = d3
    int n,i,j,k,diagonal=0,nonDiagonal=0;
    double a[3][4] = {
                        {10,-5,-2,3},
                        {4,-10,3,-3},
                        {1,6,10,-3}
                     };
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                diagonal+=a[i][j];
            else
                nonDiagonal+=a[i][j];
        }
    }

    if(diagonal > nonDiagonal)
    {
        double x,y,z,xx,yy,zz,i=1,e,e1=0,e2=0,e3=0;
        printf("Enter Tolerable Limit : ");
        scanf("%lf",&e);
        x=y=z=xx=yy=zz=0;
        
        do
        {
            x = (a[0][3]-a[0][1]*yy-a[0][2]*zz)/a[0][0];
            y = (a[1][3]-a[1][0]*xx-a[1][2]*zz)/a[1][1];
            z = (a[2][3]-a[2][0]*xx-a[2][1]*yy)/a[2][2];
            
            printf("%.0lf Iteration, x = %lf, y = %lf, z = %lf\n",i++,x,y,z);

            e1 = fabs(x-xx);
            e2 = fabs(y-yy);
            e3 = fabs(z-zz);
            xx=x,yy=y,zz=z;
            
        }while(e1>e && e2>e && e3>e);
    }
    else
        printf("\nJacobi Method Cannot Be Applied...\n");
    return 0;
}
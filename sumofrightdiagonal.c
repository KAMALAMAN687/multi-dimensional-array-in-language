#include<stdio.h>
int main()
{
     int a[3][3],b[3][3];
    int i,j,sum;
    printf("enter no. of matrix");
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
            {
            sum=sum+a[i][j];
            }     
        }

    }
    printf("sum of diagonal is %d",sum);
}
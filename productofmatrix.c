#include<stdio.h>
int main()
{

    int a[3][3],b[3][3],c[3][3];
    int i,j,k,d;
    printf("enter no. of first matrix");
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter no. of second matrix");
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {   
        for(j=0;j<=2;j++)
        {
            d=0;
            for(k=0;k<=2;k++)
            {
                d=d+a[i][k]*b[k][j];
            }
            c[i][j]=d;
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("  %d  ",c[i][j]);
        }
        printf("\n");
    }

}
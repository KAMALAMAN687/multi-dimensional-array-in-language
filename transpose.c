#include<stdio.h>
int main()
{
     int a[3][3],b[3][3];
    int i,j,k,d;
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
           b[i][j]=a[j][i];
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("  %d  ",b[i][j]);
        }
        printf("\n");
    }

}

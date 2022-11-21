#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i>j)
            {
                a[i][j]=0;
            }
        }
    }
    printf("upper triangular matrix of entered matrix is : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

}

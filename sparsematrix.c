#include<stdio.h>
int main()
{
    printf("enter rows and columns");
    int m,n,i,j,k=0,l;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            k++;
            else
            l++;
        }
        k+=0;
    }
    if(k>=l)
    {
        printf("given matrix is sparse matrix\n");
        printf("no. of zeros is %d",k);
    }
    else
    printf("given matrix is not a sparse matrix");

}
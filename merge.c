#include<stdio.h>
int main()
{
    int a[4],b[4],c[8],i,j,k=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);

    }
    for(j=0;j<4;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0,j=0,k=0;
   while(k<8)
   {
    if(a[i]<b[j])
    {
        c[k]=a[i];
        k++;
        i++;
    }
    else
    {
        c[k]=b[j];
        k++;
        j++;
    }
   }
   for(i=0;i<=7;i++)
   {
    printf(" %d ",c[i]);

   }
   printf("shorted array is : ");
   int d=0;
   for(i=0;i<7;i++)
   {
    for(j=i+1;j<8;j++)
    {
        if(c[i]>c[j])
        {
            d=c[i];
            c[i]=c[j];
            c[j]=d;
            
        }
    }
   }
    for(i=0;i<=7;i++)
   {
    printf(" %d ",c[i]);

   }


}
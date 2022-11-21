#include<stdio.h>
int main()
{
    int i,a[10],b[100]={0,0},l=0,j;
      for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++)
    {
        b[a[i]]++;
    }
    i=0;
    for(i=0;i<=9;i++)
    {
       if(b[i]!=0)
       {
        printf("sequence of %d is %d \n",i,b[i]);
       }
    }
}

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,a[x],ee=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        {
            ee=ee+a[i];
        }
    }
    printf("%d",ee);
}
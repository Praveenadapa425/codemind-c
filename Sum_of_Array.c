#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,a[x],sum=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
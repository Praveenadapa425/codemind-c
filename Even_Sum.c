#include<stdio.h>
int main()
{
    int x,i,even=0;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
    }
    printf("%d",even);
}
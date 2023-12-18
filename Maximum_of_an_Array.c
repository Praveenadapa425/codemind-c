#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,a[x],max=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<x;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
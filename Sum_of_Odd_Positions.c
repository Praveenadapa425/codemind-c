#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,a[x],oi;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(i%2!=0)
        {
            oi=oi+a[i];
        }
    }
    printf("%d",oi);
}
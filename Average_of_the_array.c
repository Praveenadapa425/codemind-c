#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,a[x],t=0;
    float avg;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        t=t+a[i];
    }
    avg=(float)t/x;
    printf("%.2f",avg);
}
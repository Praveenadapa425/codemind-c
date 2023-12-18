#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,a[x],min;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<x;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            //printf("%d",min);
        }
    }
    printf("%d",min);
}
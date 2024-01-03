#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x],i;
    for(i=0;i<x;i++)
    {
       scanf("%d",&a[i]); 
    }
    int count=0;
    for(i=1;i<x-1;i++)
    {
        if((a[i-1]%2==0 && a[i+1]%2!=0)||(a[i+1]%2==0 && a[i-1]%2!=0))
        {
            count++;
        }
        
    }
    printf("%d",count);
}
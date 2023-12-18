#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,a[x],oddsum=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(a[i]%2!=0)
        {
            oddsum=oddsum+a[i];
        }
    }
    printf("%d",oddsum);
    
}
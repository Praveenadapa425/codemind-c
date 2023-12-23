#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,lonip;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            lonip=i;
        }
    }
    printf("%d",lonip);
}
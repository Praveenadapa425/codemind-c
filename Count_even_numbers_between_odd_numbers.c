#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ceven=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0 && a[i-1]%2!=0 && a[i+1]%2!=0)
       {
           ceven++;
       }
    }
    printf("%d",ceven);
}
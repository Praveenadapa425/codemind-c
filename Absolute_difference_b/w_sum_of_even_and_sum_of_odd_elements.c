#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],oe=0,ee=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            oe+=a[i];
        }
        else
        {
            ee+=a[i];
        }
    }
    //printf("%d",ee);
    if(ee>oe)
    {
        printf("%d",ee-oe);
    }
    else
    {
        printf("%d",oe-ee);
    }
    
}
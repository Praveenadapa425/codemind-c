#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,avg,tot=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tot+=a[i];
    }
    avg=tot/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}
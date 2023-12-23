#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,avg,tot=0,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tot+=a[i];
    }
    avg=tot/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
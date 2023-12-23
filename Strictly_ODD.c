#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,flag=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            if(i%2==0)
            {
                flag=0;
            }
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
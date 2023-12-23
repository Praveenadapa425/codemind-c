#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,last_odd;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            last_odd=a[i];
        }
    }
    printf("%d",last_odd);
}
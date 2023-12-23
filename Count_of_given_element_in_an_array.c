#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0,i,z;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            c++;
        }
    }
    printf("%d",c);
}
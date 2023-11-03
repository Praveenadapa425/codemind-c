#include<stdio.h>
int main()
{
    int n,x,t=0;
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        t=t+x;
    }
    printf("%d",t);
}
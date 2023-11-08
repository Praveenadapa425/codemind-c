#include<stdio.h>
int main()
{
    int x,i,t=1;
    scanf("%d",&x);
    for(i=x;i>0;i--)
    {
        t=t*i;
    }
    printf("%d",t);
}
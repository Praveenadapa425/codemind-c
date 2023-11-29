#include<stdio.h>
int main()
{
    float x,i,t=0;
    scanf("%f",&x);
    for(i=1;i<=x;i++)
    {
        t=t+(1/i);
    }
    printf("%.2f",t);
}
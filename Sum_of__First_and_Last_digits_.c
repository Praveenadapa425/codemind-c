#include<stdio.h>
int main()
{
    int x,xx,r;
    scanf("%d",&x);
    xx=x%10;
    while(x!=0)
    {
        r=x%10;
        if(x<10)
        {
            xx=xx+r;
            break;
        }
        x=x/10;
    }
    printf("%d",xx);
}
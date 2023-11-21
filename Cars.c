#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i>0;i++)
    {
        if(i*4>=x)
        {
            printf("%d",i);
            break;
        }
    }
}
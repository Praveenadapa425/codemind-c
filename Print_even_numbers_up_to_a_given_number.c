#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x%2==0)
    {
    for(int i=x;i<=y;i=i+2)
    {    
        printf("%d ",i);
    }
    }
    else
    {
        for(int i=x+1;i<=y;i=i+2)
        {
            printf("%d ",i);
        }
    }
}
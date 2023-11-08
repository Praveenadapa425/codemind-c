#include<stdio.h>
int main()
{
    int x,y,i,ii,xx=0,yy=0;
    scanf("%d%d",&x,&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            xx=xx+i;
        }
    }
    for(ii=1;ii<y;ii++)
    {
        if(y%ii==0)
        {
            yy=yy+ii;
        }
    }
    if(x==yy && y==xx)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    
}
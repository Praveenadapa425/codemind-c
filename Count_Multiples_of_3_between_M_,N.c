#include<stdio.h>
int main()
{
    int x,y,c=0,i;
    scanf("%d%d",&x,&y);
    for(i=x;i<y;i++)
    {
        if(i%3==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}
#include<stdio.h>
int main()
{
    int n,k,m,i;
    scanf("%d%d%d",&n,&k,&m);
    for(i=1;i>0;i++)
    {
        if(n<=k*m*i)
        {
            printf("%d",i);
            break;
        }
    }
}
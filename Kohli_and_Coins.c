#include<stdio.h>
int main()
{
    int x,r,i;
    scanf("%d",&x);
    if(x%10==0)
    {
     for(i=1;i>0;i++)
        if(x==i*10)
       {
           printf("%d",i);
           break;
        }
    }
    else if(x%5==0)
    {
        for(i=1;i>0;i++)
        
        if(x==(i*10)+5)
        {
            printf("%d",i+1);
            break;
        }
    }
    
    else
    {
        printf("-1");
    }
}

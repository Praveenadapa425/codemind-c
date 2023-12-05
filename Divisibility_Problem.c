#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("0");
    }
    else
    {
         for(int i=1;i>0;i++)
         {    a=a+1;
             if(a%b==0)
             {
                 printf("%d",i);
                 break;
             }
         }
    }
}
#include<stdio.h>
int main()
{
    int a,i,p=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            p=p+1;
        }
    }
    if(p<3)
    {
        printf("Prime");
    }
    else 
    {
        printf("Not Prime");
    }
}
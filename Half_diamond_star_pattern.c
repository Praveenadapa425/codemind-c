#include<stdio.h>
int main()
{   
    int x;
    scanf("%d",&x);
    int i,j;
    if(3<=x && x<=100)
    {
    for(i=1;i<=x;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=x-1;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else 
    {
        printf("The pattern is not possible");
    }
}
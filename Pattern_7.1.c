#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i;
    for(i=0;i<x;i++)
    {
        for(int j=i;j>0;j--)
        {
            printf(" ");
        }
   /* }
    for(i=0;i<x;i++)
    {*/
        for(int j=x-i;j>0;j--)
        {
        printf("* ");
        }
        printf("
");
    }
}
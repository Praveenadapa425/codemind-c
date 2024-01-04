#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=x;i>0;i--)
    {
        for(j=x-i;j>0;j--)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}
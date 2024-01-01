#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=x;i>0;i--)
    {
        for(j=i;j<=x;j++)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}
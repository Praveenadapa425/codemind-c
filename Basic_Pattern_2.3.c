#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
    for(j=0;j<i;j++)
    {
    printf("%c ",65+j);
    }
    printf("
");
    }
}
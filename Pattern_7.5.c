#include<stdio.h>
int main()
{
    int x,i,j,k;
    scanf("%d",&x);
    k=0;
    for(i=0;i<x;i++)
    {
        for(j=k;j>0;j--)
        {
            printf(" ");
        }
        for(j=x-i;j>0;j--)
        {
            printf("%c ",65+i);
        }
        printf("
");
        k++;
    }
}
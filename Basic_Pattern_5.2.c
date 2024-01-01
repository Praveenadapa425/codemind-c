#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=x-i;k>0;k--)
        {
            printf("*");
        }
        printf("
");
    }
}
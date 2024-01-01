#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}
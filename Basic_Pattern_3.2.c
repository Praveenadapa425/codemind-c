#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=i;j<=x;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}
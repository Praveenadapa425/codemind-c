#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    int i,j;
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}
#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    int i,j;
    for(i=b;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(i>=j)
            {
            printf("%d ",k);
            }
            else
            {
            printf(" ");
            }
        }
        printf("
");
        k--;
    }
}
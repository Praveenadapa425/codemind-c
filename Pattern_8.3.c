#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
    {
        if(i==j||i+j==n+1)
        printf("%d",k);
        else
        printf(" ");
    }
    printf("
");
    k--;
}
return 0;
}
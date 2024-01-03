#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x,flag=0;
    scanf("%d",&x);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
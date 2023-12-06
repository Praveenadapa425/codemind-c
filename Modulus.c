#include<stdio.h>
int mod(int ,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int z=mod(x,y);
    printf("%d",z);
}
int mod(int x,int y)
{
    int t;
    t=x%y;
    return t;
}
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,f[x],z,flag=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&f[i]);
    }
    scanf("%d",&z);
   // printf("%d",z);
    for(i=0;i<x;i++)
    {
        if(f[i]==z)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
#include<stdio.h>
 int main()
 {
     int n,i,j,k;
     scanf("%d",&n);
     for(i=n;i>0;i--)
     {
         for(j=1;j<=i;j++)
         {
             printf("%d",i);
         }
         for(k=n-i;k>0;k--)
         {
             printf("*");
         }
         printf("
");
     }
 }
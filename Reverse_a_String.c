#include<stdio.h>
int main()
{
	char s1[101];
	scanf("%[^
]s",s1);
	int i,len=0,t;
	for(i=0;s1[i]!=NULL;i++)
	{
		len+=1;
		
	}
	i=0;
	int j=len-1;
	while(i<=j)
	{
	  t=s1[i];
	  s1[i]=s1[j];
	  s1[j]=t;
	  i++;
	  j--;	
	}
    	printf("%s",s1);
}
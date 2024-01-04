#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],s1[101];
    scanf("%[^
]s",&s);
    strcpy(s1,s);
    printf("%s",s1);
}
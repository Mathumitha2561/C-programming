#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int i,len=0,len1=0;
	printf("Enter the string 1 :");
	scanf("%s",&s1);
	printf("Enter the string 2 :");
	scanf("%s",&s2);
	for(i=0;s1[i]!='\0';i++)
		len++;
	for(i=0;s2[i]!='\0';i++)
		len1++;
	int j=0;
	for(i=len;i<(len+len1);i++)
	{
		s1[i]=s2[j];
		j++;
	}
	s1[i]='\0';
	printf("After concatenation , the string is %s",s1);
		
}

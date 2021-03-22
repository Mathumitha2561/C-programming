#include<stdio.h>
int main()
{
	char s1[1000],s2[1000];
	int i,j,len1=0,len2=0,count=0;
	scanf("%s%s",&s1,&s2);
	for(i=0;s1[i]!='\0';i++)
		len1++;
	for(i=0;s2[i]!='\0';i++)
		len2++;
	for(i=0;i<len1;i++)
		if(s1[i]==s2[i])
			count++;
	if(len1 == count)
		printf("The two strings are same");
	else
		printf("The two strings are different");
	
}


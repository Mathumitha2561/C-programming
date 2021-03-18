#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i,j,len;
	printf("Enter the string : ");
	scanf("%[^\n]",&s1);
	len =strlen(s1);
	printf("The string after reversed : ");
	for(i=len-1;i>=0;i--)
	{
		if(s1[i] == ' ')
		{
			s1[i]='\0';
			printf("%s ",&(s1[i])+1);
		}
	}
	printf("%s",s1);
}

#include<stdio.h>
int main()
{
	char s1[100];
	int i,sum=0;
	printf("Enter the string:");
	scanf("%s",&s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>=48 && s1[i]<=57)
			sum = sum+(s1[i]-'0');
	}
	printf("The sum of numbers in the string is %d",sum);
}

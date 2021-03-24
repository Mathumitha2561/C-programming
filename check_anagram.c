#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int i,j,count,a=0,l1=0,l2=0;
	printf("Check whether the given string Anagram or not\n");
	printf("Enter the two strings : \n");
	scanf("%s%s",&s1,&s2);
	for(i=0;s1[i]!='\0';i++)
		l1++;
	for(i=0;s2[i]!='\0';i++)
		l2++;
	
	for(i=0;i<l1;i++)
	{
		count = 0;
		for(j=0;j<l2;j++)
		{
			if(s1[i] == s2[j])
				count++;
		}
		if(count == 1)
			a++;
		else
			break;
	
	}
	if(l1 == a)
		printf("True");
	else
		printf("False");	
	
}

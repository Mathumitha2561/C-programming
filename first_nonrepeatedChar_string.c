#include<stdio.h>
int main()
{
	char s1[100],i,j,count,len = 0,k=0;
	printf("Enter the string: ");
	scanf("%s",&s1);
	for(i=0;s1[i]!='\0';i++)
		len++;
	for(i=0;i<len;i++)
	{
		count = 0;
		for(j=0;j<len;j++)
		{
			if(s1[i]==s1[j])
				count++;
		}
		if(count == 1)
		{
			printf("The first non repeated character is %c in string \"%s\".",s1[i],s1);
			k=1;
			break;
		}
	}
	if(k==0)
		printf("All characters are repeated in the given string \"%s\".",s1);
	return 0;
}

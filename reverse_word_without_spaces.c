#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],temp;
	int len,i=0,j;
	printf("Enter the string : ");
	scanf("%[^\n]",&s1);
	len =strlen(s1);
	j=len-1;
	while(i<j)
	{
		if(s1[i]==' ')
			i++;
		if(s1[j]==' ')
			j--;
		else
		{
			temp = s1[i];
			s1[i]=s1[j];
			s1[j]= temp;
			i++;
			j--;
		}
	}
	printf("%s",s1);


}

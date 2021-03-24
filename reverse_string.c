#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int len=0,i;
	printf("Enter the string : ");
	scanf("%s",&s1);
	for(i=0;s1[i]!='\0';i++)
		len++;
	printf("The string after reversing is \"%s\"",reverse(s1,0,len-1));
	return 0;
}
int reverse(char s1[], int i, int len)
{
	char temp;
	temp = s1[i];
	s1[i] = s1[len-i];
	s1[len-i]=temp;
	if(i == len/2)
		return s1;
	reverse(s1,i+1,len);
}

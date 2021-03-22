#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swapping,the values are %d %d\n\n",a,b);
	a = a^b;
	b=a^b;
	a = a^b;
	printf("After swapping,the values are %d %d",a,b);
}

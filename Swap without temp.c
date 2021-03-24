#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers:");
	scanf("%d %d",&a,&b);
	printf("Before swapping: %d and %d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping: %d and %d",a,b);
}

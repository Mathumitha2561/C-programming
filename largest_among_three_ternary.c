#include<stdio.h>
int main()
{
	int a,b,c,largest=0;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	largest = a>=b ? (a>=c ? a : c) : (b>c ? b : c);
	printf("The greatest number among three numbers is %d",largest);
}

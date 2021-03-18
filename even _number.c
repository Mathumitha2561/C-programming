#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The even number for first %d numbers is ",n);
	for(i=1;i<=n;i++)
		if(i%2 == 0)
			printf("%d ",i);
}

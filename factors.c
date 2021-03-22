#include<stdio.h>
int main()
{
	int n,i,count = 0;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("The factors are ");
	for(i=1;i<=n;i++)
		if(n%i == 0)
			printf("%d ",i);
	
}

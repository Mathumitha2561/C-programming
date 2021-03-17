#include<stdio.h>
int main()
{
	int number,i;
	printf("Enter the number:")
	scanf("%d",&number);
	
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",i,number,i*number);
	}
}

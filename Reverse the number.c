#include<stdio.h>
int main()
{
	int rem=0,num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Before reversing: %d\n",num);
	while(num!=0)
	{
		rem = num%10;
		sum = sum*10+rem;
		num = num/10;
	}
	printf("After reversing: %d",sum);
}

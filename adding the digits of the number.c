#include<stdio.h>
int main()
{
	int rem=0,num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The given number is: %d\n",num);
	while(num!=0)
	{
		rem = num%10;
		sum = sum+rem;
		num = num/10;
	}
	printf("After adding its digits: %d",sum);
}

#include<stdio.h>
int main()
{
	int num,n,rem=0,sum=0;
	printf("Enter the number to be reversed: ");
	scanf("%d",&num);
	n = num;
	while(n!=0)
	{
		rem = n%10;
		sum = sum*10+rem;
		n = n/10;
	}
	if(sum == num)
		printf("The given number %d is a Palindrome..",sum);
	else
		printf("The given number %d is not a Palindrome..",num);
}

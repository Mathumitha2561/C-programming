#include<stdio.h>
int main()
{
	int num,r[100],i=0,j;
	scanf("%d",&num);
	while(num!=0)
	{
		r[i] = num%2;
		num=num/2;
		i++;
	}
	printf("The binary number for given decimal number is")
	for(j=i-1;j>=0;j--)
		printf("%d",r[j]);
}

#include<stdio.h>
void lcm(int,int);
void gcd(int,int);
int main()
{
	int a,b;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	lcm(a,b);
	gcd(a,b);
	return 0;
}
void lcm(int n1,int n2)
{
	int max = (n1>n2)?n1:n2;
	while(1)
	{
		if(max%n1 == 0 && max%n2 == 0)
		{
			printf("LCM of two numbers : %d\n",max);
			break;
		}
		++max;
	}
}

void gcd(int n1,int n2)
{

	if(n2==0)
		printf("GCD of two numbers : %d",n1);
		
	else if(n1>=n2 && n2>0)
		return gcd(n2,n1%n2);
		
}

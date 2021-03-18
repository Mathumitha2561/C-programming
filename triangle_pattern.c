#include<stdio.h>
#include<string.h>
int main()
{
	int num,i,j,k,p;
	printf("Enter the number:");
	scanf("%d",&num);
	for(k=1;k<=num;k++)
	{
		for(i=k;i<=num-1;i++)
			printf(" ");
		for(j=1;j<=k;j++)
			printf("%d",j);
		for(p=k-1;p>0;p--)
			printf("%d",p);
		printf("\n");
	}
}

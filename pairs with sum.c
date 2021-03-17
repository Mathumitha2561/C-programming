#include<stdio.h>
int main()
{
	int arr[100],i=0,j,n,sum,count=0;
	printf("Enter the sum and number of elemenets in the array :");
	scanf("%d %d",&sum,&n);
	printf("Enter the elements:");
	for(j=0;j<n;j++)
		scanf("%d",&arr[j]);
	printf("The sum %d in the array are ",sum);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j] == sum)
			{
				count++;
				printf("(%d,%d) ",arr[i],arr[j]);
			}
		}
	}
	printf("with %d pairs",count);
}

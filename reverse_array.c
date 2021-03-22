#include<stdio.h>
int main()
{
	int arr[1000],i,n,temp;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the values:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n/2;i++)
	{
		temp =arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

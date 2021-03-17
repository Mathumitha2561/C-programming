#include<stdio.h>
int main()
{
	int arr[100],i=0,j,n,temp;
	scanf("%d",&n);
	for(j=0;j<n;j++)
		scanf("%d",&arr[j]);
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp = arr[i];
			arr[i]= arr[i+1];
			arr[i+1]=temp;
			i=-1;
		}
	}
	printf("After sorting: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

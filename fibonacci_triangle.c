#include <stdio.h>
int main()
{
	int f1,f2,i,f3,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		f1 = 0, f2 = 1,f3=0;
		printf("%d ",f2);
		for(j=0;j<i;j++)
		{
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
			printf("%d ",f3);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,k,r1,r2,c1,c2;
	printf("Enter the range of rows and columns for matrix 1: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the range of rows and columns for matrix 2: ");
	scanf("%d%d",&r2,&c2);
	if(c1 == r2)
	{
		printf("Enter the elements in matrix 1 :");
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("Enter the elements in matrix 2 :");
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		printf("Matrix 1 is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf(" %d ",a[i][j]);
			printf("\n");
		}
		printf("Matrix 2 is\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
				printf(" %d ",b[i][j]);
			printf("\n");
		}	
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<r2;k++)
					c[i][j] += a[i][k]*b[k][j];
			}
		}
		printf("Multiplication matrix is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				printf(" %d ",c[i][j]);
			printf("\n");
		}	
	}
	else
		printf("Matrix multiplication can't be performed...");	
}

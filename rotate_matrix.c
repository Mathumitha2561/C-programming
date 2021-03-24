#include<stdio.h>
int main()
{
	int m[100][100],i,j,n,temp;
	printf("Enter the range for the matrix : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&m[i][j]);
	printf("The given matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf(" %d ",m[i][j]);
		printf("\n");
	}
	rotate(n,m);
	printf("After 90 deg rotation, the matrix is \n");
	print(n,m);
	rotate(n,m);
	printf("After 180 deg rotation, the matrix is \n");
	print(n,m);
	rotate(n,m);
	printf("After 270 deg rotation, the matrix is \n");
	print(n,m);
	
}
void rotate(int n, int m[100][100])
{
	int i,j,temp;
	for(i=0;i<n/2;i++) 
	{
        for(j=i;j<n-i-1;j++)
        {
            temp = m[i][j];
            m[i][j] = m[n-j-1][i];
            m[n-j-1][i] = m[n-i-1][n-j-1];
            m[n-i-1][n-j-1] = m[j][n-i-1];
            m[j][n-i-1] = temp;
        }
    }
}
void print(int n,int m[100][100])
{
	int i,j;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf(" %d ",m[i][j]);
		printf("\n");
	}
}
 

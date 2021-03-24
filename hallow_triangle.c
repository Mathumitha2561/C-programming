#include <stdio.h>
int main()
{
    int i,n,j,k;
    printf("Enter the range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(k=0;k<n-i;k++)
    		printf(" ");
        for(j=1;j<=(2*i-1);j++)
        {
        	if(j==1 || j==(2*i-1) || i==n)
				printf("*");
			else
				printf(" ");        	
		}
        printf("\n");
    }
    return 0;
}

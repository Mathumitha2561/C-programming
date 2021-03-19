#include<stdio.h>
int main()
{
	int a,b,c,i,temp;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	for(i=0;i<3;i++)
	{
		if(a>=b && a>=c)
		{
			temp = a;
			a = c;
			c = temp;
		}
		else 
		{
			if(b>=c)
			{
				temp = b;
				b = c;
				c = temp;
			}
			if(a>=b)
			{
				temp = a;
				a = b;
				b = temp;
			}
		}
	}
	printf("After sorting in ascending order : %d %d %d ",a,b,c);
	printf("After sorting in descending order : %d %d %d ",c,b,a);
			
	
}

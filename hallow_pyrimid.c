#include <stdio.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            if(i<=n-1 && i>2)
            {
                if(j==i || j==1)
                    printf("* ");
                else
                    printf("  ");
            }
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}

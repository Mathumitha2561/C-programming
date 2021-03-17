 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char s[10000];
 	int i,j,k;
 	scanf("%s",&s);
 	for(i=0;i<strlen(s);i++)
 	{
 		for(j=0;j<strlen(s)-i-1;j++)
 			printf(" ");
 		for(k=i;k>=0;k--)
 			printf("%c",s[k]);
 		printf("\n");
	}
 }

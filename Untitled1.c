#include<stdio.h>
 
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<(n*2)-1;i++)
	{
		printf("\n");
		printf("\n");
		for(j=0;j<(n*2)-1;j++)
			if(i==1 || i==(n*2)-3 || j==1 || j==(n*2)-3)
				printf("%d ",n);
			else
				printf("# ");
	}
}

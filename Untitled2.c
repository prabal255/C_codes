#include<stdio.h>
#include<ctype.h>
 
int main()
{
	int a[10][10];
	int i,j,n=0,c=1,y,x;
	scanf("%d",&n);
	y=n;
	x=n;
	for(i=0;i<(n*2)-1;i++)
	{
		c++;
		y--;
		for(j=0;j<(n*2)-1;j++)
			if(i == c && j == c  || j == (y*2)-1 && i == (y*2)-1  && !isdigit(a[i][j]))
			{
					a[i][j] = y;
			}
		
	}
	for(i=0;i<(n*2)-1;i++)
	{
		printf("\n");
		for(j=0;j<(n*2)-1;j++)
			printf("%d ",a[i][j]);
	}
}

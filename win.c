/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include<algorithm>
#include <limits.h>
#include <stdbool.h>
using namespace std;
int main(int argc, char *a[])
{
    int T,N,temp,i,j,x,flag=0;
	long long int strength[N],energy[N];
	cin>>T;
	for(x=0;x<T;x++)
	{
		cin>>N;
		for(i=0;i<N;i++)
			cin>>energy[i];
		for(j=0;j<N;j++)
			cin>>strength[j];
		for(i=0; i<N; i++)
      		for(j=i+1; j<N; j++)
            	if(strength[i] > strength[j])
            	{
                	temp     = strength[i];
                	strength[i] = strength[j];
                	strength[j] = temp;
            	}
 		for(i=0; i<N; i++)
        	for(j=i+1; j<N; j++)
            	if(energy[i] > energy[j])
            	{
             		temp     = energy[i];
                	energy[i] = energy[j];
                	energy[j] = temp;
            	}
		for(i=0;i<N;i++)
			if(energy[i]<strength[i])
				flag=0;
			else
				flag=1;
		if(flag=0)
		{
			printf("LOSE\n");
			cout<<"";
		}
		else
		{
			printf("WIN\n");
			cout<<"";
		}
	}
}

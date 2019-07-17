#include <stdio.h>

int main(){
	long num,i,j,k,l,m[100000],temp,n;
	scanf("%d", &num); 
	for(k=0;k<num;k++)
	{
	    scanf("%d %d",&i,&j);
	    for(l=0;l<i;l++)
	{
	    scanf("%d",&m[l]);
	}
	for(l=0;l<j;l++)
	{   temp=m[i-1];
	    for(n=i-1;n>=0;n--)
	    {
	        if(n==0)
	        {
	            m[n]=temp;
	            break;
	        }
	        else
	        {
	            m[n]=m[n-1];
	        }
	    }
	}
    for(l=0;l<i;l++)
    {
        printf("%d ",m[l]);
    }
	}
}

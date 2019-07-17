#include <stdio.h>

int main(){
	int num,i,j,k,l,m[1000000],temp,n;
	scanf("%d", &num); 
	for(k=0;k<num;k++)
	{
	    scanf("%d %d",&i,&j);
	    for(l=0;l<i;l++)
	{
	    scanf("%d",&m[l]);
	}
	j=j%i;
	for(l=0;l<j;l++)
	{   temp=m[i-1];
	    for(n=i-1;n>=0;n--)
	    {
	        m[n]=m[n-1];
	    }
	    m[0]=temp;
	}
    for(l=0;l<i;l++)
    {
        printf("%d ",m[l]);
    }
    printf("\n");
	}
}

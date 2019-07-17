#include <stdio.h>

int main(){
	long t,k,a[100000],n,i;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
    {
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    if(k>n)
    k=k%n;
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[(i+n-k)%n]);
    }
    printf("\n");
    
    		
    		
    	}
}

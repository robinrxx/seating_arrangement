#include <stdio.h>

int main(){
	long testcases, array_size, shift, k,l,m[100000],temp,n;
	scanf("%d", &testcases); 
	while(testcases-- > 0){
		scanf("%d %d",&array_size, &shift);
		for(l=0; l<array_size; l++) scanf("%d",&m[l]);
		
		shift  = shift % array_size;
		
		while(shift-- > 0){
			i = array_size;
			temp = m[i-1];
			for(n=i-1;n > 0;) m[n] = m[--n];
			m[0] = temp;
		}
		
		while(array_size>0) printf("%d ",m[--array_size]);
	}
}

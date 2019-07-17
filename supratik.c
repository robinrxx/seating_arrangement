#include <stdio.h>

int main(){
	long testcases, size, shift, k,l,m[100000],temp,n;
	scanf("%ld", &testcases); 
	while(testcases-- > 0){
		scanf("%ld %ld",&size, &shift);
		for(l=0; l<size; l++) scanf("%ld",&m[l]);
		
		shift = size - (shift%size);
		for(l=0;l<size;l++){
			if(shift>=size)shift = 0;
			printf("%ld ", m[shift]);
			shift++;
		}
		printf("\n");
	}
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	long long a,b,l,k=0,co=0,cd=0,temp;
	scanf("%lld %lld",&a,&b);
	while(b!=0){
		temp = a%b;
		a=b;
		b=temp;
	}
	
	long long *comdiv= calloc(1000000, sizeof(int));
	
	
	
	for(long long i=1;i<a+1;i++){//common divisor
		
		if(a%i==0 && b%i==0){
			comdiv[k]=i;
			k++;
			
		}
	}
			printf("part 1 done now");

	cd=k;
	k=k-1;
	l=comdiv[k];
	
	
	for(long long i=1;i<l+1;i++){
		long long co=0;
		for(long long in=0;in<=k;in++){
			if(comdiv[in]<i){
				continue;
			}
			else if(comdiv[in]==i){
				continue;
			}
			else if(comdiv[in]%i==0 && co<=2){
				co++;
				if(co==2){cd--;}
			}
			
		}
	}
	free(comdiv);
	
	printf("%lld",cd);
}

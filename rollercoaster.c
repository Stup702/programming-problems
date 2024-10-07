#include <stdio.h>

int main(){
	long long n,k,s,elig=0;
	scanf("%lld %lld",&n,&k);
	for(long long i=0;i<n;i++){scanf("%lld",&s);if(s>=k){elig++;}}
	printf("%lld",elig);
}

#include <stdio.h>

int main(){
	long long n,m,cnt=0;
	scanf("%lld %lld",&n,&m);
	for(;n<=m;n++){
		if((n/10000 == n%10) && (n/1000%10) == (n%100/10)){
			cnt++;
		}
	}
	printf("%lld",cnt);
}	

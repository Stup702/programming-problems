#include <stdio.h>


int main(){
	long long n;
	scanf("%lld",&n);
	long long all[n],ans[n];
	for(long long o=0;o<n;o++){
		scanf("%lld",&all[o]);
	}
	for(long long r=0;r<n;r++){
		ans[all[r]-1]=r+1;
		}		
	for(long long o=0;o<n;o++){
		printf("%lld ",ans[o]);
	}
	return 0;
}

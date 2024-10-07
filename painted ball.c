#include <stdio.h>

int main(){
	int n,k;
	long d2=1;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n-1;i++){
		d2=d2*(k-1);
	}
	printf("%lld",d2*k);
}


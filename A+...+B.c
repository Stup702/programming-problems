#include <stdio.h>

int main(){
	long long a,b,n,d;
	scanf("%lld %lld %lld",&n,&a,&b);
	
	
	if(b<a){
		printf("0");
	}
	else if(b==a){
		printf("1");
	}
	else if(n==1){
		printf("0");
	}
	else{
		d=n-2;
	
		printf("%lld",(b-a+1)+(b-a)*(d-1));
	}
	
}

//pewposterous
//auxtasy
//darkdreamsvr

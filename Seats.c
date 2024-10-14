#include <stdio.h>
int main(void){
	long long n=0,cnt =0;
	char string[200001]={0};
	scanf("%lld",&n);
	scanf("%s",string);
	for(int i=0;i<n;i++){
		if(string[i+1]=='.'){
		}
		else{
			continue;
		}
		if(string[i]=='#' && string[i+2]=='#'){
			cnt++;
		}
	}
	printf("%lld",cnt);
	return 0;
}

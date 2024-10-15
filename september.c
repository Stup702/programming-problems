#include <stdio.h>
#include <string.h>


int main(){
	long long cnt=0;
	for(int i=0;i<12;i++){
		char string[101]={0};
		scanf("%s",string);

		if(strlen(string)==i+1){
			cnt++;
		}


	}
	printf("%lld",cnt);
}

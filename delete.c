#include <stdio.h>
int main(){
	char string[101]={0},ans[101]={0};
	long long j=0;
	scanf("%s",string);
	for(int i=0;string[i]!='\0';i++){
		if(string[i]!=46){//   '.' is 46 in ascii
			ans[j]=string[i];
			j++;
		}
	}
	printf("%s",ans);
}

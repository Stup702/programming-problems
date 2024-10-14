#include <stdio.h>


int main(){

	char stringa[101]={0}, stringb[101]={0};

	scanf("%s %s",stringa,stringb);

	for(int i=0;i<101;i++){
		if(stringa[i]!=stringb[i]){
			printf("%d",i+1);
			return 0;
		}

		
		
		
	}
	printf("0");
}

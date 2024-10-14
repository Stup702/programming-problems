#include <stdio.h>

int strlen(char arrgh[31]){
	for(int i=0;i<31;i++){
		if(arrgh[i]=='\0'){
			return i;
		}
	}
}
int main(){

	char string[31]={0};

	int length;
	scanf("%s", string);


	length=strlen(string);
	if(string[length-3]=='s' && string[length-2]=='a' && string[length-1]=='n'){
		printf("Yes");

	}
	else{
		printf("No");
	}


}

#include <stdio.h>

int main(){
	int n,k,maxem;
	scanf("%d %d",&k,&n);
	int catene[n+1];
	for(int j=0;j<n;j++){
		scanf("%d",&catene[j]);
	}
	catene[n]=catene[0]+k;
	maxem=catene[1]-catene[0];
	for(int j=0;j<n;j++){
		if(maxem>=catene[j+1]-catene[j]){
			continue;
		}
		else{
			maxem=catene[j+1]-catene[j];
		}
	}
	printf("%d", k-maxem);
}
	
	

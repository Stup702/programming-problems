#include <stdio.h>

int main(){
	
	
	
	int n;
	
	scanf("%d",&n);
	
	float catene[n],temp,total;
	
	for(int i=0;i<n;i++){
		scanf("%f",&catene[i]);
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(catene[i]<catene[j]){
				temp=catene[i];
				catene[i]=catene[j];
				catene[j]=temp;
			}
		}
	}
	total=(catene[n-1]+catene[n-2])/2;
	
	for(int u=n-3;u>=0;u--){
		total=(total+catene[u])/2;
	}
	printf("%f",total);

}
			

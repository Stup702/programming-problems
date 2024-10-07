#include <stdio.h>
int main(){
	double score,div,coin,prob;
	int n,k;
	scanf("%d %d",&n,&k);
	
	div= 1.0/n;
	for(int i=1;i<=n;i++){
	
			score =i;
			
			coin=1;
			while(score<k){
				score*=2;
				coin*=0.5;

			}
			prob= prob+(coin * div);
		}
	
	printf("%.12lf",prob);
			
}
	
	


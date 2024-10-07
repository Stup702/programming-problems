#include <stdio.h>


		
int main(){

	int n,temp;
	
	scanf("%d",&n);
	
	int cards[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&cards[i]);
	}
	for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){//always start bigger than i, since i will have the biggest possible.
				if(cards[i]<cards[j]){//send the biggest to the first, and the lesser to the former's pos
					temp=cards[i];//temp space
					cards[i]=cards[j];//biggest to first space
					cards[j]=temp;//lesser to biggest's position
				}
			}
		}
	for(int i=0;i<n;i++){
		printf("%d ",cards[i]);
	}
}

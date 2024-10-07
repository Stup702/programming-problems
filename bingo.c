#include <stdio.h>

int main(){

	int binca[3][3],n,b,count=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&binca[i][j]);
		}
	}
	scanf("%d", &n);
	
	for(int k =0;k<n;k++){
		scanf("%d",&b);
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(b==binca[i][j]){
					binca[i][j]=0;
				}
			}
		}
	}
	
	for(int i=0;i<3;i++){
			if(binca[i][0]==0 && binca[i][1]==0 && binca[i][2]==0){
				count++;
			}
		
	}
	for(int j=0;j<3;j++){
			if(binca[0][j]==0 && binca[1][j]==0 && binca[2][j]==0){
				count++;

			}
		
	}
	if(1){
		if(binca[0][0]==binca[1][1] && binca[1][1]==binca[2][2]){
			count++;

		}
		else if(binca[2][0]==binca[1][1] && binca[1][1]==binca[0][2]){
			count++;

		}
		}
	if(count!=0){printf("Yes");}
	else{printf("No");}
	
	
		
		
		
	
	
	
	
}
	
	

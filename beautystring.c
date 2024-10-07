#include <stdio.h>

int main(){
	
	char w[100],d;
	
	int count=0;
	scanf("%s",w);
	for(int i=0;i<100;i++){
		if((count%2)!=0){
			printf("No");
			return 0;
		}
		if(w[i]==0){break;}
		d=w[i];
		count=0;
		for(int y=0;y<100;y++){
			if(w[y]==0){break;}

			if(d==w[y]){
				
				count++;				
			}
		}
	}
		
	printf("Yes");
}


#include <stdio.h>
int main(){
	
	int n,p=1,k=-1,v=-1,temp;
	scanf("%d",&n);
	char matrix[n][n];
	for(int i=0;i<n;i++){
			scanf("%s",matrix[i]);
	}
	int i=n,l=n;
	temp=matrix[0][n-1];
	while(p==1){
		
		i--;
		while(i==0){
			k++;
			while(k==n-1){
				v++;
				while(v==n-1){
					l--;
					if(l==0){
						matrix[1][n-1]=temp;
						for(int i=0;i<n;i++){
							printf("\n");
							for(int y=0;y<n;y++){
								printf("%c",matrix[i][y]);
							}
						}	
						return 0;
					}
					matrix[l][v]=matrix[l-1][v];
				}
					matrix[k][v]=matrix[k][v+1];
				}
				matrix[k][0]=matrix[k+1][0];
			}
		matrix[0][i]=matrix[0][i-1];
	}
	
}
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
/*	
12 13 14 15
16 17 18 19 
21 22 23 24
25 26 27 28 
* for(int i=0;i<n;i++){
		matrix[1][i]=matrix[1][n-1];
	}
*/

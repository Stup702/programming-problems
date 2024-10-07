#include <stdio.h>

int main(){
	int r1,c1,r2,c2,n=0,m=0,temp,g=0,h=0;
	
	printf("enter the size of the first matrix (row col):\n ");	
	scanf("%d %d", &r1,&c1);
	

	printf("enter the size of the second matrix:\n ");
	scanf("%d %d",&r2,&c2);
	
	if(c1!=r2){
		printf("Can't multiplicate because col of first matrix needs to be equal to the row of the second matrix to multiplicate");
		return 0;
	}
	
	int mat1[r1][c1], mat2[r2][c2],res[r1][c2];



	printf("enter the first matrix\n");
	for(int i=0;i<r1;i++){
		for(int y=0;y<c1;y++){
			scanf("%d",&mat1[i][y]);
		}
	}
	

	printf("enter the second matrix\n");
	for(int i=0;i<r2;i++){
		for(int y=0;y<c2;y++){
			scanf("%d",&mat2[i][y]);
		}
	}
	
	
	
	

	for(int i=0;i<r1;i++){
		
		h=0;
		for(int y=0;y<c2;y++){
			
			for(int j=0;j<c1;j++){
				temp=temp + mat1[i][j] * mat2[j][h];
				g++;
			}
		res[n][m]=temp;
			m++;
			h++;
			temp=0;
			
		}
	}
	
	for(int i=0;i<r1;i++){
		printf("\n");
		for(int y=0;y<c2;y++){
			printf("%d ",res[i][y]);
		} 
	}
}

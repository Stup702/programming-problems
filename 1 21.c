#include <stdio.h>

		
int main(){

	int a,b,tots,m=4,n;
	
	scanf("%d %d",&a,&b);
	if(b>99){n=1000;}
	else if(b>9){n=100;}
	else{n=10;}
	tots=(a*n)+b;
	for(;m*m<=tots;m++){//because 100100 is bigger than 100*100 what if its 10099
		if(m*m==tots){
			n=1;
			break;
		}
	}
	if(n==1){printf("Yes");}
	else{printf("No");}
	
	
	
}

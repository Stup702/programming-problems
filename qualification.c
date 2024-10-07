#include<stdio.h>

int main(){
	int n,a,b,pass=0,tot_b=0,x;
	scanf("%d %d %d", &n,&a,&b);
	char arr[n];
	scanf("%s",&arr);
	for(int i=0;i<n;i++){
		if(arr[i]=='a'){
			if(pass<(a+b)){
				x=1;
				pass++;
			}
			else{
				x=0;
			}
		}
		else if(arr[i]=='b'){
			if(pass<(a+b)&& tot_b<b){
				x=1;
				pass++;
				tot_b++;
			}
			else{
				x=0;
			}
		}
		else x=0;
		if(x==1){printf("Yes\n");}
		else{printf("No\n");}
	}
	return 0;
	
	
}

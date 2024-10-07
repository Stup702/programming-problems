#include <stdio.h>
int main(){
	long long n=0,temp=0,big1=0,big2=0,bigin;
	scanf("%lld",&n);

	for(int p=0;p<n;p++){
		scanf("%lld",&temp);
		if(temp> big1){
			big2=big1;
			big1=temp;	
			bigin=p;		
		}
		else if(temp> big2){
			big2=temp;	
		}
	}
	
	for(int y=0;y<n;y++){
			if (y==bigin){
				printf("%lld\n",big2);
			}
			else{
				printf("%lld\n",big1);
			}
		}
	
}
			

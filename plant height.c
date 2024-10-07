#include <stdio.h>
#include <math.h>

int main(){
	int h,ph=0,day=0,x;
	scanf("%d",&h);
	while(h>=ph){
		x=pow(2,day);
		ph=ph+x;
		day++;
	}
	printf("%d %d",day,ph);
}

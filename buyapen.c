#include <stdio.h>

int main(){
	char pen;

	int rp, gm, bm,rm;
	scanf("%d %d %d",&rp,&gm,&bm);
	rm=rp;

	scanf("%s",&pen);

	if( pen=='R'){
		rm = 200;
	}
	else if(pen =='G'){
		gm = 200;
	}
	else if(pen=='B'){
		bm = 200;
	}

	if(rm<=gm && rm<=bm){
		printf("%d",rm);
	}
	else if(gm<=rm && gm<=bm){
		printf("%d",gm);
	}
	else{
		printf("%d",bm);
	}
	return 0;
}

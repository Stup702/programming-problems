#include <stdio.h>

int main(){
	
	
	while(1){
		float hgt,spd,slp,slo,ftg,clmb=0;
		scanf("%f %f %f %f",&hgt,&spd,&slp,&ftg);
		if(hgt==0){break;}
		
		
		slo=spd/100 *ftg;
		int i=1;
	while(1){
		
		if(spd>0){
			clmb=clmb+spd;
		}
		
		spd=spd-slo;
		if(clmb>hgt){
			printf("success on day %d\n",i);
			break;
		}
		else if(clmb<0){
			printf("failure on day %d\n",i);
			break;
		}
		
		
		clmb=clmb-slp;
		if(clmb>hgt){
			printf("success on day %d\n",i);
			break;
		}
		else if(clmb<0){
			printf("failure on day %d\n",i);
			break;
		}
		i++;
		

	}

}
return 0;
}

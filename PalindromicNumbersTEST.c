	#include <stdio.h>
	int main(){
		
		int g,w,cnt=0,i;
		
		scanf("%d %d",&g,&w);
		for(;g<=w;g++){
			
			if((g/10000 == g%10) && ((g/1000)%10) == ((g%100)/10)){
				i=g/10001;
				i++;
				if((((i*10001)-1)-g)>10000){
					
					g=(i*10001) ;
					cnt=cnt+100;
				}
				else if((((i*10001)-1)-g)<10000){
					
					cnt++;
					break;
				}
			}
		}
		int temp=w-g;
		cnt=cnt+temp/100;

		printf("%d",cnt);
		
	}

#include <stdio.h>
#include <math.h>

long double cost(long double xi, long double yi, long double oldx,long double oldy){
	long double cst;
	cst=sqrt((xi-oldx)*(xi-oldx) +(yi-oldy)*(yi-oldy));
	return cst;
	
}
int main(void){
	long long n=0;
	long double old_x=0,old_y=0, org_x=0, org_y=0,sum=0, x=0,y=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		scanf("%Lf %Lf",&x,&y);
		sum+=cost(x,y,old_x,old_y);
		old_x=x;
		old_y=y;
	}
	sum+=cost(x,y,org_x,org_y);
	printf("%.10Lf",sum);
}

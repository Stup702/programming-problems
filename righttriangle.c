#include<stdio.h>
#include<math.h>

int main(){
    double xa,ya,xb,yb,xc,yc,a,b,c;
    scanf("%lf %lf",&xa ,&ya);
    scanf("%lf %lf",&xb ,&yb);
    scanf("%lf %lf",&xc ,&yc);

    a= (xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
    b= (xb-xc)*(xb-xc)+(yb-yc)*(yb-yc);
    c= (xc-xa)*(xc-xa)+(yc-ya)*(yc-ya);

    if((a==b +c)||(b==a +c)||(c==b +a)){
                        printf("Yes");
                        }
    else printf("No");
    return 0;




}

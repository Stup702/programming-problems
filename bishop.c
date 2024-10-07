#include <stdio.h>

int main(){

 long long h,w, x;

scanf("%lld %lld",&h, &w);

if(h<1 || w>1000000000){
    return 0;

}
else {
    x= h*w;

    if(x%2==0){
        printf("%lld\n",(x/2));}
    else if(x%2!=0)
        {printf("%lld\n", (x +1)/2 );}
    return 0;

}


}

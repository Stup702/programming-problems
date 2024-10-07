#include<stdio.h>

int main(void){

int i= 1079*100;

if ((i%108) >50){
printf("%d\n",i/108  +1);
}
else{printf("%d",i/108);}
/*100 8
    1 8/100
    432  432*8/100*/
}

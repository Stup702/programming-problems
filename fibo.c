#include<stdio.h>

int main(void){
long double k;
 int i,j=2;
printf("how many numbers from fibo series do you need  ( till 93) :P\n");//till 93 :P
scanf("%d",&i);
long long  fibo[i];//long long increased to 93
fibo[0]=0;
fibo[1]=1;
while (j!=i){

    fibo[j]= fibo[j-1]+fibo[j-2];
    j++;
}
for(int x=0;x<j;++x){
printf("%lld\n",fibo[x]);
}


}

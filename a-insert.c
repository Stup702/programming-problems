#include <stdio.h>

int main(){

int n,k,x, i=0;
scanf("%d %d %d",&n,&k,&x);
int series[n];
while(i<=n){
    while (i==k){
    series[i]=x;
    i++;
    }
    scanf("%d",&series[i]);
    i++;
    }
for(int m=0;m<=n;m++){

    printf("%d ",series[m]);}

}

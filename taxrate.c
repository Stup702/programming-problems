#include<stdio.h>
int main(){
    int N, X;
    scanf("%d",&N);
    X= (N *25)/27 ;
    if((X*27/25) ==N) printf("%d",X);
    else if ((((X+1))*27/25) ==N) printf("%d",X+1);
    else printf(":(");
    }

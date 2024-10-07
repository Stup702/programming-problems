#include<stdio.h>
int main(){
    int N, X;
    int i=0;
    scanf("%d",&N);

    for(int p=1;p<=50000;p++){
            X=p*1.08;
            if(X==N) {printf("%d",p); i=1;break;}

    }
    if (i==0){ printf(":(");}
    }

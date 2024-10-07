#include <stdio.h>

int main(){

    int A,B,sock,strip;
    while(scanf("%d %d",&A,&B)!=EOF){;
    sock=1;
    strip=0;
    while(sock<B){
            sock=sock+A ;
            sock-=1;
            strip++;

}
printf("%d\n",strip);
}

/*if A is 4, B is 9,
    the sock = 4
    strip=1
    and in first iteration
            sock=8
            sock=8-1=7
            strip=2
            sec iteration
            sock=11
            sock=11-1=10
            strip=3
*/






return 0;
}

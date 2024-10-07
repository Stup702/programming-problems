#include<stdio.h>

int main(){

int t, f,s,a,e,m;
int c,d,k,l;

while(scanf("%d",&t)!=EOF){
    c=0;
    while(c<t){
    scanf("%d",&f);
    d=0;
    m=0;
    while(d<f){
    scanf("%d %d %d", &s,&a,&e);
    m=m+(s*e);
    d++;
    }
    printf("%d",m);

    c++;
    }


    }
    return 0;
    }

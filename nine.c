#include<stdio.h>

int main(){

    int x,y;
    scanf("%d %d",&x,&y);

    if ((x==7||x==8||x==9) && (y==7||y==8||y==9)){
        printf("Yes");
    }
    else if ((x==1||x==2||x==3) && (y==1||y==2||y==3)){
        printf("Yes");
    }
    else if ((x==4||x==5||x==6) && (y==4||y==5||y==6)){
        printf("Yes");
    }
    else printf("No");

}

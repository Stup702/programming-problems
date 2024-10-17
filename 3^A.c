#include <stdio.h>
int main(){
	long long m=0,ans[20]={0},cnt=0,times[11]={1,3,9,27,81,243,729,2187,6561,19683,59049};
    scanf("%lld",&m);
    while(m!=0){
        for(int i=10;i>-1;i--){
            if(m-times[i]>=0){
                m-=times[i];
                ans[cnt]=i;
                cnt++;break;
            }
        }
    }
    printf("%lld\n",cnt);
    for(int i=0;i<cnt;i++){
        printf("%lld ",ans[i]);
    }
}

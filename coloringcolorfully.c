#include <stdio.h>
int main(){
	
	char s[100001];
	scanf("%s",s);
	int cnt1, cnt2;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==s[i+1]){
			if(s[i]=='0'){
				s[i+1]='1';
				cnt1++;
			}
			else if(s[i]=='1'){
				s[i+1]='0';
				cnt1++;
				
			}
			if(s[i]=='1'){
				s[i+1]='0';
				cnt2++;
			}
			else if(s[i]=='0'){
				s[i+1]='1';
				cnt2++;
			}
		}	
	}
	
	printf("%d",cnt1>cnt2?cnt1:cnt2);
	
}

#include <stdio.h>
#include <string.h>

int main(){
	char s[1000],c[1000],z[]={"\""};
	int len,l[200],len2=0,len3=0,lo;
	scanf("%s",s);
	len= strlen(s);	
	for(int i=0;i<len;i++){
		if (s[i]==z[0]){	
		l[len2]=i;
		len2++;
		}
	}
	//pushback
	for(int y=0;y<1000;y++){
		if(y<l[len3]){
			c[y]=s[y];
		}
		else if(y==l[len3]){
			c[y]=1;
			c[y+1]=1;
			len3++;
			;
			
		}
		else if(y>l[len3]){
			c[y]=s[y-1];
		}
	}
	
	printf("%s",c);
	
			
			
			
	
	
	
}
	

#include <stdio.h>


int main(){
	
	char string[27]={0};
	long long sum=0, pos_ar[26]={0},finpos_ar[26]={0};

	scanf("%s",string);
	for(int i=0;i<26;i++){
		pos_ar[i]=string[i] -65+1; //65 is ascii of A..  1 is for position correction. since we need A to be 1, not 0
	
	}
	//properly get an array of a to z that keeps the location of a to z
	for(int i=0;i<26;i++){
		finpos_ar[pos_ar[i]-1]=i+1;
		//-1 because we want the proper index for finpos. +1 is for positional correction, since we need A to be 1 not 0
		//We want finpos to be an array that knows where which character is.
		//if a is in 25 the position, the finpos will say 25 as first element.

	}
	for(int i=0;i<25;i++){
		
		sum+=(finpos_ar[i]>finpos_ar[i+1])?finpos_ar[i]-finpos_ar[i+1]:finpos_ar[i+1]-finpos_ar[i];
	
		

	}
	
	printf("%lld",sum);


}

#include<stdio.h>

int main(){

int n,sum=0,avg,stam=0;
scanf("%d",&n);
int list_a[n];
for(int i =0;i<n;i++){
	scanf("%d",&list_a[i]);
	sum+=list_a[i];
	}
if(sum%n>(n/2))
{
	avg= sum/n +1;}
else
{
	avg=sum/n;}

for(int y=0;y<n;y++){
	stam=stam + ((avg-list_a[y])*(avg-list_a[y]));
	}
printf("%d",stam);
}

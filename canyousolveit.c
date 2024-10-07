#include <stdio.h>
int main(){
	int n,m,c,sum,p;/*intialize variables*/
	scanf("%d %d %d",&n, &m, &c);
	int main[m],sub[m];/*intialize arrays*/
	for(int j=1;j<=m;j++){/*elements of main sequence B*/
		scanf("%d",&main[j-1]);
	}
	for(int i=1;i<=n;i++){/*number of sub sequences*/
		for(int j=1;j<=m;j++){/*elements of Sub sequence A*/
			scanf("%d",&sub[j-1]);
		}
		sum=0;//reset sum
		for(int k=0;k<m;k++){//add the multiplications
			sum= sum+ sub[k]*main[k];
			printf("%d\n",sum);
		}
		sum= sum+c;
		if(sum>0){//answer print
			p++;
			
		}
		
	}
	printf("%d",p);2


		
return 0;
}
			
			

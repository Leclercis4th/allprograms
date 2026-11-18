#include<stdio.h>
int main()
{
	int n,i,j,k,cas,x,sum;
	scanf("%d",&n);
	cas=0;
	for(j=1;j<=n/2+1;j++){
		sum=0;
		for(i=j;i<=n/2+1;i++){
			sum=sum+i;
			if(sum==n && i>j){
				printf("%d = ",n);
				x=0;
				for(k=j;k<=i;k++){
				
					if(x!=0){
						printf("+%d",k);
					}else{
						printf("%d",k);
					}
					x=x+1;
				}
				cas=cas+1;
				printf("\n");
			}
			if(sum>n) break;
		}
	}
	printf("cases: %d",cas);
	return 0;
}//boundary situation
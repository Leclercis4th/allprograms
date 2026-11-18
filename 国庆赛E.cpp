#include<stdio.h>
int main()
{
	int c[1000],n,N,i,j,sum,a,b;
	scanf("%d%d",&n,&N);
	for(j=1;j<=n;j++){
		c[j]=0;
	}
	for(i=1;i<=N;i++){
		scanf("%d%d%d",&sum,&a,&b);
		
		for(j=a;j<=b;j++){
			c[j]=c[j]+sum/(b-a+1);
		}
	}//inside one round,there must be a new variant,or the variant will be covered
	for(i=1;i<=n;i++){
		printf("%d ",c[i]);//" "needed
	}
	return 0;
}
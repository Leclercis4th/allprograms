#include<stdio.h>
int main()
{
	int n,m,i,j,c;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			c=i*j;
			printf("%d*%d=%d ",i,j,c);
		}
		printf("\n");
	}
	return 0;
}

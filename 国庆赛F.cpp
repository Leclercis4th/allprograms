#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	k=n;
	for(i=1;i<=n;i++){
		for(j=1;j<=2*(n-k);j++){
			printf(" ");
		}
		for(j=1;j<=k;j++){
			printf("\\--/");
		}
		printf("\n");
		for(j=1;j<=2*(n-k)+1;j++){
			printf(" ");
		}
		for(j=1;j<=k;j++){
			printf("\\/  ");
		}
		printf("\n");
		k=k-1;
	}
	return 0;
}
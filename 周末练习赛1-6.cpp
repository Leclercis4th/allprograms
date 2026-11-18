#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("E");
	}
	printf(" ");
	for(i=1;i<=n;i++){
		printf("Z");
	}
	printf("\n");
	for(i=2;i<(n+1)/2;i++){
		printf("E");
		for(j=2;j<=2*n-i+1;j++){
			printf(" ");
		}
		printf("Z\n");
	}
	for(i=1;i<=n;i++){
		printf("E");
	}
	printf(" ");
	for(i=1;i<=n-i;i++){
		printf(" ");
	}
	printf("Z\n");
	for(i=(n+3)/2;i<n;i++){
		printf("E");
		for(j=2;j<=2*n+1-i;j++){
			printf(" ");
		}
		printf("Z\n");
	}
	for(i=1;i<=n;i++){
		printf("E");
	}
	printf(" ");
	for(i=1;i<=n;i++){
		printf("Z");
	}
	return 0;
}

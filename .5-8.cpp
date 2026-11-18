#include<stdio.h>
void divide(int n);
int main()
{
	int n,T,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d",&n);
		divide(n);
		printf("\n");
	}
	return 0;
}
void divide(int n){
	int left,right;
	if(n<=2){
		printf("%d",n);
		return;
	}else{
		printf("(");
		if((n%2)==1){
			divide((n+1)/2);
			printf("+");
			divide((n-1)/2);
		}else{
			divide((n+2)/2);
			printf("+");
			divide((n-2)/2);
		}
		printf(")");
	}
}
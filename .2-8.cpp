#include<stdio.h>
#include<math.h>
int main(){
	int T,i,x;
	long long N;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%lld",&N);
		x=(int)floor(sqrt(2*N)-0.5);
		printf("%d\n",x);
	}
	return 0;
}
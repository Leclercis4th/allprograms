#include<stdio.h>
int main(){
	int n,i;
	long long a[100000];
	long long sum;
	n=0;
	sum=0;
	for(i=0;;i++){
		if(scanf("%lld",&a[i])!=EOF){
		n=n+1;
		}else{
			break;
		}
	}
	for(i=0;i<=n-1;i++){
		sum=sum+a[i];
		if(sum>2147483647){
			sum=sum-a[i];
			break;
		}
	}
	printf("%lld",sum);
	return 0;
}

#include<stdio.h>
long long f(long long a,long long b,int n);
int main()
{
	int n,q,i;
	long long a,b;
	scanf("%d",&q);
	for(i=1;i<=q;i++){
		scanf("%lld%lld%d",&a,&b,&n);
		printf("%lld\n",f(a,b,n));
	}
	return 0;
}
long long f(long long a,long long b,int n){
	if(n==1){
		return a;
	}else if(n==2){
		return b;
	}else{
		int i;
		long long sum,pre,j;
		sum=b;
		pre=a;
		for(i=1;i<=n-2;i++){
			j=sum;
			sum=sum+pre;
			pre=j;
		}
		return sum;
	}
}
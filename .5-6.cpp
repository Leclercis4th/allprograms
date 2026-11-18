#include<stdio.h>
long long pow(int n);
int fig(long long x,int n);
int main()
{
	int q,p,i;
	long long a,b;
	scanf("%d",&q);
	for(i=1;i<=q;i++){
		scanf("%lld%lld%d",&a,&b,&p);
		printf("%d\n",fig(a+b,p));
	}
	return 0;
}

long long pow(int n){
	int i;
	long long sum;
	sum=1;
	for(i=1;i<=n;i++){
		sum*=10;
	}
	return sum;
}

int fig(long long x,int n){
	return (x-(x/pow(n))*pow(n))/(pow(n-1));
}
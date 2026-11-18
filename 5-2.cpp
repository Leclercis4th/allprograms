#include<stdio.h>
long long A(long long m,long long n);
int main()
{
	long long m,n;
	scanf("%lld%lld",&m,&n);
	printf("%lld",A(m,n));
	return 0;
}
long long A(long long m,long long n){
	if(m==0){
		return n+1;
	}else if(n==0){
		return A(m-1,1);
	}else{
		return A(m-1,A(m,n-1));//no Chinese mark is allowed
	}
	
}
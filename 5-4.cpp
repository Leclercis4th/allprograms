#include<stdio.h>
long long f(long long x);
long long g(long long x);
int main()
{
	int n,i;
	long long x;
	scanf("%d%lld",&n,&x);
	if(n==0){
		printf("%lld",x);
	}else{
	
		if((n%2)==0){
			for(i=1;i<=(n/2);i++){
			
					x=f(x);
					x=g(x);
			
			
					x=g(x);
					x=f(x);
			
			}
		}else{
			for(i=1;i<=((n-1)/2);i++){
			
					x=f(x);
					x=g(x);
			
			
					x=g(x);
					x=f(x);
			
			}
		
					x=f(x);
					x=g(x);
		
		}
		printf("%lld",x);
	}
	
	return 0;
}
long long f(long long x){
	return (x*x+1)%1000000007;
}
long long g(long long x){
	return (2*x+1)%1000000007;
}
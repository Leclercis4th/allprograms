#include<stdio.h>
int main()
{
	long long T,a,b;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld%lld",&a,&b);
		if(a-b>=b-a){
			printf("%lld\n",a-b);
		}else{
			printf("%lld\n",b-a);
		}
	}
	return 0;
}

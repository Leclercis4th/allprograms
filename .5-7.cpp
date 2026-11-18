#include<stdio.h>
int S(int n,unsigned long long k);
unsigned long long pow_2(int n);
int main()
{
	int n,r,T,i;
	unsigned long long k;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d%llu",&n,&k);
		printf("%d\n",S(n,k));
	}
	return 0;
}

int S(int n,unsigned long long k){
	if(k>(pow_2(n))){
		return 9-S(n-1,pow_2(n+1)-k);
	}else if(k==(pow_2(n))){
		return n%10;
	}else if(k<(pow_2(n))){
		return S(n-1,k);
	}else return 0;
}

unsigned long long pow_2(int n){
	int i;
	unsigned long long res=1;
	for(i=1;i<=n;i++){
		res=res*2;
	}
	return res;
}

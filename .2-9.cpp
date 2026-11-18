#include<stdio.h>
int main(){
	long long x,y,n,m;
	n=0;
	scanf("%lld",&m);
	for(x=1;x<=m;x++){
		for(y=x+1;y<=m;y++){
			if(x*x+y*y-3*x*y==-1){
				n=n+1;
			}
		}
	}
	printf("%lld",n);
	return 0;
}
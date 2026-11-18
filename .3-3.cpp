#include<stdio.h>
int main()
{
	int n,op,i;
	unsigned long long int S,x,y;
	S=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%lld",&op,&x);
		if(op==1){//reverse
			S=S^(1ll<<x);
		}else if(op==2){//on
			S=S|(1ll<<x);
		}else if(op==3){//off
			y=1ll<<x;//必须用"ll"
			y=~y;
			S=S&y;
		}
		
	}
	printf("%lld",S);
	return 0;
}
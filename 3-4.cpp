#include<stdio.h>
int main()
{
	int t,op,x,i,j;
	unsigned int n,m,b,y;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%u%d%d",&n,&op,&x);
		x=x%32;
		if(op==0){//left
			m=n<<x;
			y=0;
			for(j=31;j>=32-x;j--){
				y=y|(1<<j);//
			}
			b=n&y;
			b=b>>(32-x);
			n=m+b;
		}
		if(op==1){//right
			m=n>>x;
			y=0;
			for(j=0;j<=x-1;j++){
				y=y|(1<<j);//
			}
			b=n&y;
			b=b<<(32-x);
			n=m+b;
		}
		printf("%u\n",n);
	}
	return 0;
}
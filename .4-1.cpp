#include<stdio.h>
int main()
{
	int n,t1,t2,t3,c1,c2,c3,sum,i;
	scanf("%d%d%d",&c1,&c2,&c3);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d%d",&t1,&t2,&t3);
		sum=t1*c1+t2*c2+t3*c3;
		printf("%d\n",sum);
	}
	return 0;
}
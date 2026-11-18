#include<stdio.h>
int main()
{
	int n,a,b,o,i;
	scanf("%d%d%d",&n,&a,&b);
	for(i=1;i<=n;i++){
		scanf("%d",&o);
		if(o<4){
			a=(a+o*2)%8;
			b=(b+o*2)%8;
			printf("%d %d\n",a,b);
		}else{
			a=(8+2*(o-4)-a)%8;
			b=(8+2*(o-4)-b)%8;
			printf("%d %d\n",a,b);
		}
	}
	return 0;
}

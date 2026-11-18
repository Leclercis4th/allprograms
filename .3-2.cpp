#include<stdio.h>
int main()
{
	unsigned long long a,b,c;
	int n,i,j,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%llu%llu",&a,&b);
		c=a^b;
		for(j=0;j<=63;j++){
			if((c>>j)==1){
				d=j+1;
				break;
			}
		}
		printf("%d\n",d);
	}
	return 0;
}
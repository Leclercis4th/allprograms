#include<stdio.h>
long long a[100000];
int b[100000];
int main()
{
	int n,i,j;
	char get;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		b[i]=0;
		for(j=0;j<=63;j++){
			if(((a[i]>>j)&1)==1){
				b[i]=b[i]+1;
			}
		}
	}
	for(i=0;i<=n-1;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
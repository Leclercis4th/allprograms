#include <stdio.h>
void divide(int n,int k);
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	divide(n,k);
	return 0;
}
void divide(int n,int k){
	int left,right;
	printf("%d ",n);
	if(n<=k){
		return;
	}
	left=n/2;
	right=n-n/2;
	divide(left,k);
	divide(right,k);
}
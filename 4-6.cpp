#include<stdio.h>
int main()
{
	int T,n,a[200000],m;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		scanf("%d%d",&n,&m);
		for(int j=1;j<=n;j++){
			scanf("%d",&a[j]);
		}
		int summin=0,summax=0;
		for(int j=1;j<=n;j++){
			summin=summin+a[j];
		}
		int sum=0;
		for(int j=1;j<=m;j++){
			sum=sum+a[j];
		}
		if(sum>=summax){
			summax=sum;
		}
		if(sum<=summin){
			summin=sum;
		}
		for(int j=2;j<=n-m+1;j++){
			sum=sum-a[j-1]+a[j+m-1];
			if(sum>=summax){
				summax=sum;
			}
			if(sum<=summin){
				summin=sum;
			}
		}
		printf("%.1lf %.1lf\n",1.0*summax/m,1.0*summin/m);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
double a[1000001];
int main()
{
	int n,b,e,i;
	double ua,ub,u,sum,sum1,ave;
	sum=0;
	sum1=0;
	scanf("%d",&n);
	scanf("%d%d",&b,&e);
	for(i=1;i<=n;i++){
		scanf("%lf",&a[i]);
		sum=sum+a[i];
	}
	ave=1.0*sum/n;
	for(i=1;i<=n;i++){
		sum1=sum1+(a[i]-ave)*(a[i]-ave);
	}
	ua=sqrt(sum1/(1.0*n*(n-1))); //n*(n-1)int type must be turnt to double type
	ub=b/pow(10,e)/sqrt(3);//*pow(10,-e) may have problem with accuracy
	u=sqrt(ua*ua+ub*ub);
	printf("%.*f %.*f\n",e,ave,e,u);
	return 0;
}
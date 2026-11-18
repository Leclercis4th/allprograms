#include<stdio.h>
int main()
{
	int i,n;
	double E,z,m;
	scanf("%d",&n);
	E=1/(1.0*n);
	for(i=2;i<=n;i++){
		z=n-i+1;
		m=n-i+2;
		E=E+z/m;
	}
	printf("%.6lf",E);
	return 0;
}
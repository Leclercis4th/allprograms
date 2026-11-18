#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double x,y,i,j,k;
	scanf("%lf%lf",&i,&j);
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		scanf("%lf%lf",&x,&y);
		printf("%.3lf\n",sqrt((x-i)*(x-i)+(y-j)*(y-j)));
	}
}

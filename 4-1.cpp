#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x;
	double a,b,sum;
	x=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lf%lf",&a,&b);
		scanf("%lf",&sum);
		if(fabs(a+b-sum)<=1e-9){
			printf("Accepted\n");;
		}else{
			printf("Wrong Answer\n");
		}
	}
	return 0;
}
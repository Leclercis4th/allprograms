#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double a,b,c;
	double eps=1e-6;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lf%lf%lf",&a,&b,&c);
		if(a+b-c<=eps){
			printf("No Triangle\n");
		}else{
			if(a*a+b*b-c*c<-eps){
				printf("Obtuse Triangle\n");
			}else if(a*a+b*b-c*c>eps){
				printf("Acute Triangle\n");
			}else{
				printf("Right-angled Triangle\n");
			}
		}
	}
	return 0;
}

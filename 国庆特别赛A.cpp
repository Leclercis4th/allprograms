#include<stdio.h>
int main(){
	int i;
	double a,min,max,sum,ave;
	sum=0;
	scanf("%lf",&a);
	sum=sum+a;
	min=a;
	max=a;
	for(i=1;i<=7;i++){
		scanf("%lf",&a);
		sum=sum+a;
		if(a<min){
			min=a;
		}
		if(a>max){
			max=a;
		}
	}
	ave=(sum-min-max)/6;
	printf("%.2lf",ave);
}
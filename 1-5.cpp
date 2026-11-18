#include<stdio.h>
int main()
{
	int F,I,M,sum;
	scanf("%d%d%d",&F,&I,&M);
	sum=F*20+I*10+M*5;
	if(sum>15){
		printf("WA");
		return 0; 
	}if(sum<15,I==0){
		printf("OE");
	}else{
		printf("AC");
	}
}

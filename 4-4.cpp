#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long sample,sum;
	int a,n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%llu",&sample);
		sum=0;
		for(j=1;j<=19;j++){
			a=sample%10;
			sample=(sample-a)/10;
			sum=sum+a;
			
		}
		while(sum>22){
			sample=sum;
			sum=0;
			a=0;
			for(j=1;j<=19;j++){
			a=sample%10;
			sample=(sample-a)/10;
			sum=sum+a;
		}
		
		
	}
	if(sum==22){
			printf("0\n");
		}else{
			printf("%d\n",sum);
		}
	}
	return 0;
}
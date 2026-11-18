#include<stdio.h>
#include<math.h>
int main()
{
	int m,i,a[32];
	unsigned int n1;
	long long n;
	scanf("%lld",&n);
	if(n==0){
		for(i=1;i<=32;i++){
			printf("0");
		}
		printf(" ");
		for(i=1;i<=32;i++){
			printf("0");
		}
		printf(" ");
		for(i=1;i<=32;i++){
			printf("0");
		}	
	}else if(n>0 && n<2147483648){
	//	printf("&&&&&&&");
		m=n;
		a[31]=0;
		for(i=30;i>=0;i--){
			a[i]=(m >> i) & 1;
		}
		for(i=31;i>=0;i--){
			printf("%d",a[i]);
		}
		printf(" ");
		for(i=31;i>=0;i--){
			printf("%d",a[i]);
		}
		printf(" ");
		for(i=31;i>=0;i--){
			printf("%d",a[i]);
		}
	}else if(n<0 && n>=-2147483648){//
		m=-n;
		a[31]=1;
		for(i=30;i>=0;i--){
			a[i]=(m >> i) & 1;
		}
		for(i=31;i>=0;i--){
			printf("%d",a[i]);
		}
		printf(" ");
		for(i=30;i>=0;i--){
			a[i]=1-a[i];
		}
		for(i=31;i>=0;i--){
			printf("%d",a[i]);
		}
		printf(" ");
		n1=n+pow(2,32);
		for(i=31;i>=0;i--){
			a[i]=(n1 >> i) & 1;
		}
		for(i=31;i>=0;i--){
			printf("%d",a[i]);
		}
	}else{
		printf("NONE NONE NONE");
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int op,a[8],i;
	long long n;
	scanf("%d%d",&op,&n);
	if(op==0){
		if(n>=0){
			for(i=7;i>=0;i--){
				a[i]=(n>>i)&1;
				printf("%d",a[i]);
			}
		}else{
			n=n+256;
			for(i=7;i>=0;i--){
				a[i]=(n>>i)&1;
				printf("%d",a[i]);
			}
		}
	}else if(op==1){
		if(n<10000000){
			for(i=6;i>=0;i--){
				a[i]=n/pow(10,i);
				n=n-a[i]*pow(10,i);
			}
			for(i=0;i<=6;i++){
				n=n+a[i]*pow(2,i);
			}
			printf("%d",n);
		}else{
			for(i=7;i>=0;i--){
				a[i]=n/pow(10,i);
				n=n-a[i]*pow(10,i);
			}
			for(i=0;i<=7;i++){
				n=n+a[i]*pow(2,i);
			}
			n=n-256;
			printf("%d",n);
		}
	}
	return 0;
}
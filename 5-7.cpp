#include<stdio.h>
void starry_sky(int n,int x);
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		starry_sky(n,i);
		printf("\n");
	}
	return 0;
}
void starry_sky(int n,int x){
	if(n==3 && (x==1 || x==3)){
		printf("* *");
	}else if(n==3 && x==2){
		printf(" * ");
	}else{
		if((x<=(n/3))){
			starry_sky(n/3,x);
			for(int j=1;j<=(n/3);j++){
				printf(" ");
			}
			starry_sky(n/3,x);
		}else if((x<=(2*n/3))){
			for(int j=1;j<=(n/3);j++){
				printf(" ");
			}
			starry_sky(n/3,x-n/3);
			for(int j=1;j<=(n/3);j++){
				printf(" ");
			}
		}else{
			starry_sky(n/3,x-2*n/3);
			for(int j=1;j<=(n/3);j++){
				printf(" ");
			}
			starry_sky(n/3,x-2*n/3);
		}
	}
}
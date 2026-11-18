#include<stdio.h>
int gcd(int a,int b);
int max(int a,int b);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x==0 || y==0){
		printf("%d\n",x+y);
	}else{
		printf("%d\n",gcd(max(x,y),x+y-max(x,y)));
	}
}

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int gcd(int a,int b){
	int r;
	if((r=a%b)!=0){
		return gcd(b,r);
	}else{
		return b;
	}
}
#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
}
int gcd(int a,int b){
	int r;
	while((r=a%b)!=0){
		a=b;
		b=r;
	}
	return b;
}
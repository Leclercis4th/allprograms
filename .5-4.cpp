#include<stdio.h>
#include<math.h>
int f(int l,int r); 
int reverse(int x);
int main()
{
	int t,l,r,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d%d",&l,&r);
		printf("%d\n",f(l,r));
	}
	return 0;
}
int f(int l,int r){
	int i,j,judge,judge1,amount;
	amount=0;
	for(i=l;i<=r;i++){
		judge=0;
		judge1=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				judge=1;
				break;
			}
		}
		if(judge==0 && i>1){
			for(j=2;j<=sqrt(reverse(i));j++){
				if((reverse(i)%j)==0){
					judge1=1;
					break;
				}
			}
			if(judge1==0 && i!=reverse(i)){
				amount=amount+1;
			}
		}
	}
	return amount;
}
int reverse(int x){
	int res=0;
	while(x>0)
	{
		res=res*10+x%10;
		x=x/10;
	}
	return res;
}
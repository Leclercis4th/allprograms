#include<stdio.h>
#include<math.h>
int a[10000];
int amount(int l,int r);
int main()
{
	int T,i,l,r,f,j,n;
	f=1;
	n=0;
	for(i=2;i<=10000;i++){
		int k=0;
		for(j=2;j<=sqrt(i);j++){
			if((i%j)==0){
				k=1;
				break;
			}
		}
		f=f+1;
		if(k==0){
			n=n+1;
			a[f]=n;
		}else{
			a[f]=a[f-1];
		}
	}
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d%d",&l,&r);
		printf("%d\n",amount(l,r));
	}
	return 0;
}
int amount(int l,int r){
	return a[r]-a[l-1];
}
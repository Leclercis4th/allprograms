#include<stdio.h>
int main()
{
	int n,m,v,t,i,a;
	scanf("%d",&n);
	int b[m];
	for(i=0;i<=m;i++){
		b[i]=0;
	}
	for(i=1;i<=n;i++){
		scanf("%d%d",&t,&v);
		a=t*v;
		if(a<=m){
		    b[a-1]=b[a-1]+1;
		}else{
			b[m]=b[m]+1;
		}
	}
	for(i=0;i<=m;i++){
		if(b[i]!=0){
			printf("%d %d\n",i+1,b[i]);
		}
	}
	return 0;
}

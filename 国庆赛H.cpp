#include<stdio.h>
#include<math.h>
int main()
{
	int N,y,j,p,q;
	long long a,b,m,n,fz,fm,i,A,B;
	scanf("%d",&N);
	for(j=1;j<=N;j++){
		scanf("%d%d",&a,&b);
		scanf("%d",&y);
		A=B=1;
		for(i=1;i<=a;i++){
			A=A*10;
		}
		for(i=1;i<=b;i++){
			B=B*10;
		}
		if(b==0){
			fz=y;
			fm=A;
		}else {
			m=y/(B);
			n=y-m*B;
			fz=m*(B-1)+n;
			fm=(A)*(B-1);
		}
			
		//printf("%d %d ",fz,fm);
		if(fm%fz==0){
			fm=fm/fz;
			fz=1;//notice the sequece of these two lines
		}else{
			for(i=fz/2+1;i>=1;i=i-1){
				if(fz%i==0 && fm%i==0){
					fz=fz/i;
					fm=fm/i;
				}
			}
		}
		p=fz;
		q=fm;
		printf("%d %d\n",p,q);
	}
	return 0;
}
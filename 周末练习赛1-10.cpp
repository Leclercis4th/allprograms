#include<stdio.h>
int main()
{
	long long int q,l,n,x,i,j,a,t,r,m1,m2,o1,o2;//t表示小的数个数，r表示大的数个数 
	scanf("%lld",&q);
	for(l=1;l<=q;l++){
		scanf("%lld%lld",&n,&x);
	t=0; 
	r=0;
	j=0;
	o1=x;
	o2=10000000000;
	if(n%2!=0){
		for(i=1;i<=n;i++){
			scanf("%lld",&a);
			if(x>a){
				t=t+1;
			}
			if(x<a){
				r=r+1;
			}
			if(x==a){
				j=1;
			}
		}
		if(j==1 && t<=(n-1)/2 && r<=(n-1)/2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else{
		for(i=1;i<=n;i++){
			scanf("%lld",&a);
			if(x>a){
				t=t+1;
				m1=x-a;
				if(m1<o1){
					o1=m1;
				}
			}
			if(x<a){
				r=r+1;
				m2=a-x;
				if(m2<o2){
					o2=m2;
				}
			}
			if(x==a){
				j=1;
			}
		}
		if(j==1 && t<n/2 && r<n/2){
			printf("YES\n");
		}else if(t>0 && r>0 && o1==o2  && t==n/2 && r==n/2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

}
	}
	
return 0;
}

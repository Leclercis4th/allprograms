#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,c,o,p,n,i;
	scanf("%lld%lld",&a,&b);
	c=a+b;
	for(o=1;;o++){
		if(a<pow(10,o)){
			break;
		}
	}
	for(p=1;;p++){
		if(b<pow(10,p)){
			break;
		}
	}
	for(n=1;;n++){
		if(c<pow(10,n)){
			break;
		}
	}
	n=n+2;
	for(i=1;i<=(n-o);i++){
		printf(" ");
	}
	printf("%lld\n",a);
	printf("+");
	for(i=1;i<=(n-p-1);i++){
		printf(" ");
	}
	printf("%lld\n",b);
	for(i=1;i<=n;i++){
		printf("-");
	}
	printf("\n");
	for(i=1;i<=2;i++){
		printf(" ");
	}
	printf("%lld\n",c);
	return 0;
}

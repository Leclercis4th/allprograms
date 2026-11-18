#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,m,t,x,y;
	scanf("%d",&n);
	m=n;
	for(i=1;;i++){
		if(n<3){
			t=i;
			break;
		}
		n=n/3;
	}
	while(t--){
		int y=pow(3,t);
		x=m/y;
		printf("%d",x);
		m=m-x*y;
	}
    return 0;
}

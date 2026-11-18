#include<stdio.h>
int main()
{
	int a[1000],i,x;
	i=0;
	while(scanf("%d",&x)==1){
		a[i]=x;
		i=i+1;
	}
	for(int j=0;j<=i-1;j++){
		printf("%d ",a[j]);
	}
	return 0;
}
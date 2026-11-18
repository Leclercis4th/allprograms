#include<stdio.h>
int main()
{
	int a[100000],n,i,j,length,b,c;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	length=b=1;
	for(j=1;j<=n-1;j++){
		if(a[j]==a[j-1]+1){
			length=length+1;
			if(length>b){
				b=length;
			}
		}else{
			length=1;
		}
	}
	printf("%d",b);
	return 0;
}
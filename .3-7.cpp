#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[10],i,k,x;
	long long m,w,j;//overflow variant j
	scanf("%d",&n);
	m=0;
	x=0;
	for(i=0;i<=n-1;i++){//notice corner mark0/1?
		scanf("%d",&a[i]);
		m=m+1;
	}
	for(j=0;j<(1ll<<m);j++){//long long transposition
		printf("{");
		x=0;
		for(k=0;k<=9;k++){
			if(j>>k&1==1){//binary counting
				if(x==0){
					printf("%d",a[k]);
				}else{
					printf(",%d",a[k]);
				}	
				x+=1;//to resolve with ","
			}
		}
		printf("}\n");
	}
	return 0;
}
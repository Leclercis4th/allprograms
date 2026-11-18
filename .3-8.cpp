#include<stdio.h>
int main()
{
	int T,n,a[16],i,j,k,m,b[16],c[16],y,y1,min,op[17],r,p[17],ci;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		//printf("###");//
		scanf("%d",&n);
		y=0;
		
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			y=y|(a[j]<<j);
		}
		for(j=0;j<=n-1;j++){
			scanf("%d",&m);
			b[j]=0;
			for(k=0;k<=m-1;k++){
				scanf("%d",&c[k]);
				b[j]=b[j]|(1<<(c[k]-1));
			}
		}
		if(y==0){
			printf("0\n0x00000000\n");
			continue;
		}
		min=n+1;
		for(j=0;j<(1<<n);j++){
			y1=y;
			ci=0;
			for(k=0;k<=n;k++){
				if(((j>>k))&1==1){
					y1=y1^b[k];
					ci=ci+1;
					p[ci]=k+1;
				}
			}
			if(y1==0 && ci<=min){
				
				min=ci;
				for(r=1;r<=min;r++){
					op[r]=p[r];
				}
				//for(r=1;r<=min;r++){
				//printf("%d ",op[r]);
		//	}//
			}
		}
		if(min==n+1){
			printf("0xDE1C1DE");
		}else{
			printf("%d\n",min);
			for(r=1;r<=min;r++){
				printf("%d ",op[r]);
			}
		}
		printf("\n");
	}
	return 0;
}
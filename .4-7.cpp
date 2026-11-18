#include<stdio.h>
int main()
{
	int n,m,a[10000],v[10000],op,i,j,p,q,l,sum,b;
	scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++){
		scanf("%d",&op);
		switch(op){
			case 1:scanf("%d%d",&p,&l);
			for(j=p;j<=p+l-1;j++){
				printf("%d ",a[j]);
			}
			printf("\n");
			break;
			case 2:scanf("%d%d",&p,&l);
			for(j=p;j<=p+l-1;j++){
				a[j]=0;
			}
			break;
			case 3:scanf("%d%d",&p,&l);
			for(j=p;j<=p+l-1;j++){
				a[j]=v[j];
			}
			break;
			case 4:scanf("%d%d",&p,&l);
			for(j=p;j<=p+l-1;j++){
				scanf("%d",&b);
				a[j]=b;
			}
			break;
			case 5:scanf("%d%d%d",&p,&q,&l);
			for(j=1;j<=l;j++){
				sum=a[p+j-1]+a[q+j-1];
				a[p+j-1]=a[q+j-1];
				a[q+j-1]=sum-a[q+j-1];
				if(a[p+j-1]>v[p+j-1]){
					a[p+j-1]=v[p+j-1];
				}
				if(a[q+j-1]>v[q+j-1]){
					a[q+j-1]=v[q+j-1];
				}
			}
			break;
			case 6:scanf("%d%d",&p,&l);
			for(j=1;j<=l;j++){
				scanf("%d",&b);
				a[p+j-1]=a[p+j-1]+b;
				if(a[p+j-1]>v[p+j-1]){
					a[p+j-1]=v[p+j-1];
				}else if(a[p+j-1]<0){
					a[p+j-1]=0;
				}
			}
			break;
			case 7:scanf("%d%d%d",&p,&q,&l);
			for(j=1;j<=l;j++){
				sum=a[p+j-1]+a[q+j-1];
				if(sum>v[q+j-1]){
					a[q+j-1]=v[q+j-1];
					a[p+j-1]=sum-v[q+j-1];
				}else{
					a[q+j-1]=sum;
					a[p+j-1]=0;
				}
			}
		}
	}
	for(i=0;i<=n-1;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
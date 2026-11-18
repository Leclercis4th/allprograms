#include<stdio.h>
int a[1000][1000],b[1000][1000],c[1000][1000];
int main()
{
	int n,m,p;
	scanf("%d%d%d",&n,&m,&p);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			int sum=0;
			for(int k=0;k<m;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
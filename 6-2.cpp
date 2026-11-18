#include<stdio.h>
int main()
{
	int i,j;
	float a[200][200];
	scanf("%d%d",&i,&j);
	for(int m=0;m<i;m++){
		for(int n=0;n<j;n++){
			scanf("%f",&a[m][n]);
		}
	}
	for(int n=0;n<j;n++){
		for(int m=0;m<i;m++){
			printf("%.2f ",a[m][n]);
		}
		printf("\n");
	}
	return 0;
}
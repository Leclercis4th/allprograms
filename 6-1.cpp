#include<stdio.h>
void sort(int a[],int n);
int main()
{
	int a[1000],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
void sort(int a[],int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				int hold=a[j+1];
				a[j+1]=a[j];
				a[j]=hold;
			}
		}
	}
}
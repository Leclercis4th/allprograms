#include<stdio.h>
int main()
{
	int n,a[3],min,max,med,i;
	scanf("%d",&n);
	while(n!=495){
		a[2]=n/100;
		a[1]=(n-100*a[2])/10;
		a[0]=n%10;
		max=min=a[0];
		for(i=1;i<=2;i++){
			if(a[i]<min){
				min=a[i];
			}else if(a[i]>max){
				max=a[i];
			}
		}
		med=a[1]+a[2]+a[0]-max-min;
		n=max*99-min*99;
		if(min==0){
			if(med==0){
				printf("%d%d%d - %d = %d\n",max,med,min,max,n);
			}else{
				printf("%d%d%d - %d%d = %d\n",max,med,min,med,max,n);
			}
		}else{
			printf("%d%d%d - %d%d%d = %d\n",max,med,min,min,med,max,n);
		}
	}
	return 0;
}
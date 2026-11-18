#include<stdio.h>
int main()
{
	int a,sum,ave,m,f,i;
	sum=0;
	m=0;
	f=0;
	for(i=1;;i++){
		scanf("%d",&a);
		if(a==-1){
			break;
		}else{
			sum=a+sum;
			m=m+1;
			if(a<60){
				f=f+1;
			}
		}
	}
	ave=sum/m;
	printf("Average:%d\n",ave);
	printf("Failed:%d",f);
	return 0;
}
//6·ÖÖÓÍê³É 

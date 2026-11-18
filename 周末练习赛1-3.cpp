#include<stdio.h>
int main()
{
	int m,v,i;
	scanf("%d",&m);
	for(i=1;i++;){
		v=m%10;
		printf("%d\n",v);
		if(m!=v){
			m=(m-v)/10;
		}else{
			return 0;
		}
		
	}
}

#include<stdio.h>
int findyear(int y,int m,int d);
int main()
{
	int y,m,d,k,T,i,j;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		scanf("%d%d%d%d",&y,&m,&d,&k);
		if(k==0){
			printf("%d %d %d\n",y,m,d);
		}else{
			for(j=1;j<=k;j++){
				m=m+1;
				if(m==13){
					m=1;
					y++;
				}
				if(d>findyear(y,m,d)){
					j=j-1;
				}
			}
			printf("%d %d %d\n",y,m,d);
		}
	}
	return 0;
}
int findyear(int y,int m,int d){
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		return 31;
	}else if(m==2){
		if(((y%4)==0 && (y%100)!=0) || (y%400)==0){
			return 29;
		}else{
			return 28;
		}
	}else{
		return 30;
	}
}
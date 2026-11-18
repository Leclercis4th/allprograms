#include<stdio.h>
int main()
{
	int p,q,Y,M,D,i;
	long long x,y,a,b,c,d,e,m,JDN;
	scanf("%d%d",&p,&q);
	if(p!=0){
		for(i=1;i<=p;i++){
			scanf("%d%d%d",&Y,&M,&D);
			a=(14-M)/12;
			y=Y+4800-a;
			m=M+12*a-3;
			JDN=D+((153*m+2)/5)+365*y+(y/4)-(y/100)+(y/400)-32045;
			printf("%lld\n",JDN);
		}
	}
	if(q!=0){
		for(i=1;i<=q;i++){
			scanf("%lld",&JDN);
			a=JDN+32044;
			b=((4*a+3)/146097);
			c=a-(146097*b/4);
			d=((4*c+3)/1461);
			e=c-(1461*d/4);
			m=((5*e+2)/153);
			D=e+1-((153*m+2)/5);
			M=m+3-12*(m/10);
			Y=100*b+d-4800+(m/10);
			printf("%04d %02d %02d\n",Y,M,D);
		}
	}
}
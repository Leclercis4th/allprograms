#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	double s,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		if(b==0&&c!=0){
			printf("N0 real root\n");
		}else if(b!=0){
			printf("%.3f",-1.0*c/b);
		}else{
			printf("1nfinite solutions\n");
		}
	}else if(b*b-4*a*c>0){
		t=(-b+sqrt(b*b-4*a*c))/(2.0*a);
		s=(-b-sqrt(b*b-4*a*c))/(2.0*a);
		if(s<t){
			printf("%.3f %.3f\n",s,t);
		}else{
			printf("%.3f %.3f\n",t,s);
		}
	}else if(b*b-4*a*c==0){
		s=-b/(2.0*a);
		printf("%.3f\n",s);
	}else{
		printf("N0 real root\n");
	}
	return 0;
}

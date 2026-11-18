#include<stdio.h>
int main()
{

	double credit,score,single,m,GPA,n;
	n=0;
	m=0;
	while(scanf("%lf%lf",&credit,&score)!=EOF){
		n=n+credit;
		if(score>=60){
			single=4-3*(100-score)*(100-score)/1600;
		}else{
			single=0;
		}
		m=m+single*credit;
	}
	GPA=m/n;
	printf("%.2lf",GPA);
	return 0;
}
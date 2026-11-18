#include<stdio.h>
#include<string.h>
int extract(char score[]);
double X(int sc);
int main()
{
	double credit;
	double PSsum=0;
	double cresum=0;
	char score[3];
	char P[2]={'P','\0'};
	char NP[3]={'N','P','\0'};
	char A[2]={'A','\0'};
	char B[2]={'B','\0'};
	char C[2]={'C','\0'};
	char D[2]={'D','\0'};
	char E[2]={'E','\0'};
	int sc;
	while(scanf("%lf",&credit)!=EOF){
		scanf("%s",score);
		if(strcmp(score,P)==0 || strcmp(score,NP)==0){
			PSsum+=0;
			cresum+=0;
		}else if(strcmp(score,A)==1){
			PSsum+=credit*4.00;
			cresum+=credit;
		}else if(strcmp(score,B)==1){
			PSsum+=credit*3.50;
			cresum+=credit;
		}else if(strcmp(score,C)==1){
			PSsum+=credit*2.80;
			cresum+=credit;
		}else if(strcmp(score,D)==1){
			PSsum+=credit*1.70;
			cresum+=credit;
		}else if(strcmp(score,E)==1){
			PSsum+=credit*0.00;
			cresum+=credit;
		}else{
			if(strlen(score)<2){
				PSsum+=credit*0.00;
				cresum+=credit;
			}else{
				sc=extract(score);
				if(sc<60){
					PSsum+=credit*0.00;
					cresum+=credit;
				}else{
					PSsum+=credit*X(sc);
					cresum+=credit;
				}
			}
		}
	}
	printf("%.2lf",PSsum/cresum);
	return 0;
}
int extract(char score[]){
	int sum=0;
	sum=(score[0]-30)*10+(score[1]);
	return sum;
}
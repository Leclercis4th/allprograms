#include<stdio.h>
#include<string.h>
int extract(char score[]);
double X(int sc);
int main()
{
	double credit;
	double PSsum=0;
	double cresum=0;
	char score[4];
	int sc;
	while(scanf("%lf",&credit)!=EOF){
		scanf("%s",score);
		if(strcmp(score,"P")==0 || strcmp(score,"NP")==0){
			PSsum+=0;
			cresum+=0;
		}else if(strcmp(score,"A")==0){
			PSsum+=credit*4.00;
			cresum+=credit;
		}else if(strcmp(score,"B")==0){
			PSsum+=credit*3.50;
			cresum+=credit;
		}else if(strcmp(score,"C")==0){
			PSsum+=credit*2.80;
			cresum+=credit;
		}else if(strcmp(score,"D")==0){
			PSsum+=credit*1.70;
			cresum+=credit;
		}else if(strcmp(score,"E")==0){
			PSsum+=credit*0.00;
			cresum+=credit;
		}else{
			if(strlen(score)==3){
                PSsum+=credit*4.00;
				cresum+=credit;
            }else if(strlen(score)<2){
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
	sum=(score[0]-'0')*10+(score[1]-'0');
	return sum;
}
double X(int sc){
    return 4-((3.0*(100-sc)*(100-sc))/1600);
}
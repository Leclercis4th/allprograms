#include<stdio.h>
int main()
{
	int i,j,a,b,c,d,f;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(j=21;j>0;j--){
		if(j>11){
			for(i=1;i<=5;i++){
				f=a*(i-6)*(i-6)*(i-6)+b*(i-6)*(i-6)+c*(i-6)+d;
				if(f==j-11){
					printf("+");
				}else{
					printf(" ");
				}
			}
			if(d==j-11){
				printf("+");
			}else{
				printf("|");
			}
			for(i=1;i<=5;i++){
				f=a*i*i*i+b*i*i+c*i+d;
				if(f==j-11){
					printf("+");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}else if(j==11){
			for(i=1;i<=11;i++){
				f=a*(i-6)*(i-6)*(i-6)+b*(i-6)*(i-6)+c*(i-6)+d;
				if(f==0){
					printf("+");
				}else{
					printf("-");
				}
			}
			printf("\n");
		}else{
			for(i=1;i<=5;i++){
				f=a*(i-6)*(i-6)*(i-6)+b*(i-6)*(i-6)+c*(i-6)+d;
				if(f==j-11){
					printf("+");
				}else{
					printf(" ");
				}
			}
			if(d==j-11){
				printf("+");
			}else{
				printf("|");
			}
			for(i=1;i<=5;i++){
				f=a*i*i*i+b*i*i+c*i+d;
				if(f==j-11){
					printf("+");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	float i,j,ij;
	float n,o;
	o=0; 
	ij=-1;
	for(i=0;;i++){
		ij=ij*(-1);
		n=4*ij/(2*i+1);
		if(fabs(n)<0.0001){
			break;
		}else{
			o=o+n;
		}
	}
	printf("pai=%.4f",o);
}

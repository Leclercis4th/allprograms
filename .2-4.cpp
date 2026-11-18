#include<stdio.h>
int main(){
	char a[100000];
	int n=0;
	int i;
	for(i=1;;i++){
		if(scanf("%c",&a[i])==EOF){
			break;
		}else{
			n=n+1;
		}
	}
	for(i=1;i<=n;i++){
		printf("%c",a[i]);
	}
	return 0;
}

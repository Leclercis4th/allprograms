#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(b!=0){
		c=a/b;
	printf("%d / %d = %d",a,b,c);
	}else{
		printf("Error!");
	}
}

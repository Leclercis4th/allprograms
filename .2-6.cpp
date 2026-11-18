#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,i;
	char ch;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf(" %c %d%d",&ch,&a,&b);
		if(ch==43){
			printf("%d\n",a+b);
		}else if(ch==45){
			printf("%d\n",a-b);
		}else if(ch==47){
			printf("%d\n",a/b);
		}else if(ch==42){
			printf("%d\n",a*b);
		}
	}
	return 0;
}

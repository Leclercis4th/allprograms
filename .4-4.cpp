#include<stdio.h>
int main()
{
	int n,id,score,i,a,b,c,d,exc[100000],go[100000],pass[100000],f[100000];
	scanf("%d",&n);
	a=b=c=d=0;
	for(i=0;i<=n-1;i++){
		scanf("%d%d",&id,&score);
		switch(score/10){
			case 10:;
			case 9:exc[a]=id;
			a=a+1;
			break;
			case 8:go[b]=id;
			b=b+1;
			break;
			case 7:;
			case 6:pass[c]=id;
			c=c+1;
			break;
			default:f[d]=id;
			d=d+1;
			break;
		}
	}
	printf("Excellent\n");
	for(i=0;i<=a-1;i++){
		printf("%d\n",exc[i]);
	}
	printf("Good\n");
	for(i=0;i<=b-1;i++){
		printf("%d\n",go[i]);
	}
	printf("Pass\n");
	for(i=0;i<=c-1;i++){
		printf("%d\n",pass[i]);
	}
	printf("Fail\n");
	for(i=0;i<=d-1;i++){
		printf("%d\n",f[i]);
	}
	return 0;
}
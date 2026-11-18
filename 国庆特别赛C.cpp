#include<stdio.h>
int main()
{
	int n,i,j,find;
	find=0;
	int a[100],b[100];
	char char1,char2,st,ed;
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++){
		scanf(" %c->%c",&char1,&char2);
		a[i]=char1;
		b[i]=char2;
	}
	scanf(" %c %c",&st,&ed);
	for(j=1;j<=n;j++){
		for(i=1;i<=n;i++){
			if(b[i]==ed){
				ed=a[i];
			}
			if(ed==st){
				find=1;
				break;
			}
		}
		
	}	
	if(find==1){
		printf("Don't stay up too late!");
	}else{
		printf("Sorry!");
	}
}
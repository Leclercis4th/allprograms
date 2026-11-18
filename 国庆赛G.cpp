#include<stdio.h>
int c[1001],m[1001];
int main()
{
	int k[101];
	int i,n,N,j;
	int ch;
	n=0;
	N=0;
	for(i=1;;i++){
		ch=getchar();
		if(ch!='\n'){
			k[i]=ch;
			n=n+1;
			if(k[i]<=90){
				k[i]=k[i]+32;
			}
		}else{
			break;
		}
	}
	for(i=1;;i++){
		ch=getchar();
		if(ch!='\n'){
			c[i]=ch;
			N=N+1;
		}else{
			break;
		}
	}
	for(i=1;i<=N;i++){
		j=i%n;
		if(j==0){
			j=n;
		}
		m[i]=c[i]-k[j]+96+1;
		if(c[i]<=90 && m[i]>90){
			m[i]=m[i]-26;
		}
		if(c[i]<=90 && m[i]<65){
			m[i]=m[i]+26;
		}
		if(c[i]>=97 && m[i]<97){
			m[i]=m[i]+26;
		}
		if(c[i]>=97 && m[i]>122){
			m[i]=m[i]-26;
		}
		printf("%c",m[i]);
	}
	return 0;
}
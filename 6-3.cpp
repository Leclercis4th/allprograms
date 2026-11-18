#include<stdio.h>
#include<string.h>
void reverse(char s[],int x);
char original[1001];
int main()
{
	char s[1001];
	int i;
	while(gets(s)!=NULL){
		for(i=0;i<strlen(s);i++){
			original[i]=s[i];
		}
		original[i]='\0';
		reverse(s,strlen(s));
		//printf("###%s###",s);
		if(strcmp(original,s)==0){
			printf("yea\n");
		}else{
			printf("nah\n");
		}
	}
}
void reverse(char s[],int x){
		for(int i=0;i<x/2;i++){
			s[i]=original[x-1-i];
		}
}
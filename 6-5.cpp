#include<stdio.h>
#include<string.h>
int main()
{
	char s[1001];
	gets(s);
	int i=strlen(s);
	for(int j=0;j<i-3;j++){
		//printf("1");
		while(s[j]=='c' && s[j+1]=='a' && s[j+2]=='k' && s[j+3]=='e'){
			//printf("2");
			for(int k=j;k<i-3;k++){
				s[k]=s[k+4];
				//printf("3");
				//printf("%s\n",s);
			}
			i=i-4;
			if(i==0){
				break;
			}
		}
	}
	if(i==0){
		printf("EMPTY\n");
	}else{
		for(int j=0;j<i;j++){
			printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}
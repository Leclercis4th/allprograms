#include<stdio.h>
#include<string.h>
char ch[20001],compare[20001];
int c=0;
void searchndelete(char ch[],int x,char name[][21],int n,int a[]);
int main()
{
	char name[50][21];
	int n,x,a[50];
	scanf("%s",ch);
	scanf("%d",&n);
	x=strlen(ch);
	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
		a[i]=strlen(name[i]);
	}
	searchndelete(ch,x,name,n,a);
	for(int i=0;i<x-c;i++){
		printf("%c",ch[i]);
	}
	return 0;
}
void searchndelete(char ch[],int x,char name[][21],int n,int a[]){
	for(int i=0;i<n;i++){//search by name
		for(int j=0;j<x;j++){//search by string
			if(ch[j]==name[i][0]){
				if((j+a[i]-1)>=x) break;
				else{
					int mark=0;
					for(int k=1;k<a[i];k++){
						if(ch[j+k]!=name[i][k]){
							mark=1;
							break;
						}
					}
					if(mark==0){
						for(int k=j;k<x-a[i];k++){
							ch[k]=ch[k+a[i]];
						}
						x=x-a[i];
						c=c+a[i];
						searchndelete(ch,x,name,n,a);
						return;
					}else{
						continue;
					}
				}
			}else continue;
		}
	}
	return;
}
#include<stdio.h>
#include<string.h>
int find(char ch[],int n);
int main()
{
    char ch[101];
    fgets(ch,101,stdin);
    if(find(ch,strlen(ch))==0){
        printf("mmk\n");
    }else{
        printf("52\n");
    }
    return 0;
}
int find(char ch[],int n){
    for(int i=0;i<n-2;i++){
        if(ch[i]=='m' && ch[i+1]=='a' && ch[i+2]=='n'){
            return 1;
        }
    }
    return 0;
}
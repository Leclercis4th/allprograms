#include<stdio.h>
#include<string.h>
char ch[100002];
int exam(char ch[],int n);
int main()
{
    while(gets(ch)!=NULL){
        if(exam(ch,strlen(ch))==1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}
int exam(char ch[],int n){
    for(int i=0;i<n;i++){
        if(ch[i]==')'){
            for(int j=i-1;j>=0;j--){
                if(ch[j]=='('){
                    ch[i]=ch[j]='0';
                    break;
                }else if((ch[j]=='[') || (ch[j]=='{')){
                    return 0;
                }
            }
        }
        if(ch[i]==']'){
            for(int j=i-1;j>=0;j--){
                if(ch[j]=='['){
                    ch[i]=ch[j]='0';
                    break;
                }else if((ch[j]=='(') || (ch[j]=='{')){
                    return 0;
                }
            }
        }
        if(ch[i]=='}'){
            for(int j=i-1;j>=0;j--){
                if(ch[j]=='{'){
                    ch[i]=ch[j]='0';
                    break;
                }else if((ch[j]=='(') || (ch[j]=='{')){
                    return 0;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(ch[i]!='0'){
            return 0;
        }
    }
    return 1;
}
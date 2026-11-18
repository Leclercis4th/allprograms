#include<stdio.h>
#include<string.h>
void strreverse(char ch[],int n);
int main(){
    char ch[11];
    gets(ch);
    strreverse(ch,strlen(ch));
    printf("%s",ch);
    return 0;
}
void strreverse(char ch[],int n){
    char *plow=ch,*phigh=ch+n-1,hold;
    while (phigh>=plow)
    {
        hold=*phigh;
        *phigh=*plow;
        *plow=hold;
        plow++;
        phigh--;
    }
    return;
}
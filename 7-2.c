#include<stdio.h>
void reverse(char ch[]);
int main()
{
    char ch[1001];
    gets(ch);
    reverse(ch);
    printf("%s",ch);
    return 0;
}
void reverse(char ch[]){
    char *p=ch,*ps=ch;
    while (*p!='\0')
    {
        if(*p==' '){
            p--;
            char hold=*p;
            *p=*ps;
            *ps=hold;
            ps=p+2;
            p=p+2;
        }
        p++;
    }
    if(*p=='\0'){
            p--;
            char hold=*p;
            *p=*ps;
            *ps=hold;
        }
    return;
}
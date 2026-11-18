#include<stdio.h>
void stringreverse(char ch[]);
int main()
{
    char ch[101];
    while (gets(ch)!=NULL)
    {
        stringreverse(ch);
        printf("%s\n",ch);
    }
    return 0;
}
void stringreverse(char ch[]){
    char *low=ch,*high=ch;
    char hold;
    while (*high!='\0')
    {
        high++;
    }
    high--;
    while(high>low){
        hold=*low;
        *low=*high;
        *high=hold;
        high--;
        low++;
    }
    return;
}
#include<stdio.h>
#include <ctype.h>//for isspace(ch)
int main()
{
    char ch,ch1[100];
    while((ch=getchar())==(' ')){
        if(ch!=(' ')){
            ungetc(ch,stdin);
        }
    }//skip ' ' only
    scanf(" %c",&ch);//skip all sorts of blank characters
    while ((ch = getchar()) != EOF && isspace((unsigned char)ch)) 
    ;//skip all sorts of blank characters
    scanf("%s",&ch1);//skip all sorts of blank characters and input till the next blank character
    printf("%s",ch1);
}
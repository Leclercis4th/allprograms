#include<stdio.h>>
int main()
{
    char ch[200001];
    char *p=ch;
    int position;
    while(scanf("%d",&position)!=EOF){
        scanf("%s",p+position);
    }
    printf("%s",ch);
}
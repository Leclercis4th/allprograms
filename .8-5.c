#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char op[4],ch[21],ch1[21],ch2;
    int n,t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        scanf(" %s",op);
        scanf(" %s",ch);
        switch(op[1]){
            case 'e':
            printf("%d\n",strlen(ch));
            break;
            case 'p':
            scanf("%d",&n);
            if(n==0){
                printf("\n");
            }else if(n>strlen(ch)){
                for(int i=0;i<strlen(ch);i++){
                    printf("%c",ch[i]);
                }
                printf("\n");
            }else{
                for(int i=0;i<n;i++){
                    printf("%c",ch[i]);
                }
                printf("\n");
            }
            break;
            case 'a':
            scanf(" %s",ch1);
            printf("%s%s\n",ch,ch1);
            break;
            case 'm':
            scanf(" %s",ch1);
            if(strcmp(ch,ch1)>0) printf(">\n");
            else if(strcmp(ch,ch1)==0) printf("=\n");
            else printf("<\n");
            break;
            case 'o':
            scanf(" %s",ch1);
            if(strstr(ch,ch1)==NULL) printf("0\n");
            else printf("%d\n",strstr(ch,ch1)-ch+1);
            break;
            case 'h':
            scanf(" %c",&ch2);
            if(strchr(ch,ch2)==NULL) printf("0\n");
            else printf("%d\n",strchr(ch,ch2)-ch+1);
            break;
        }
    }
    return 0;
}
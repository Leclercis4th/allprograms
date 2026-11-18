#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    getchar();
    char ch[10][100001];
    char *pointer[10];
    for(int i=0;i<n;i++){
        
        gets(ch[i]);
        pointer[i]=ch[i];
        printf("%s",pointer[i]);
        //printf("!");

        //getchar();
    }
    scanf("%d",&m);
    char operation;
    int k,i,j;
    char*media=0;
    for (int v = 0; v < m; v++)
    {
        //printf("#");
        scanf(" %c",&operation);
        switch (operation)
        {
        case 'Q':
        scanf("%d",&k);
        printf("%s\n",pointer[k-1]);
        break;
        case 'S':
        scanf("%d%d",&i,&j);
        media=pointer[i-1];
        pointer[i-1]=pointer[j-1];
        pointer[j-1]=media;
        break;
        }
    }
    return 0;
}
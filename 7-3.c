#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,q,p;
    scanf("%d%d%d",&n,&q,&p);
    int *pointer=(int*)malloc(4*n);
    for(int i=0;i<n;i++){
        scanf("%d",pointer+i);
        //printf("###");
    }
    pointer=pointer+p-1;
    int k,x;
    for(int i=0;i<q;i++){
        char operation;
        scanf(" %c",&operation);
        switch(operation){
            case 'Q':
            printf("%d\n",*pointer);
            break;
            case 'L':
            scanf("%d",&k);
            pointer=pointer-k;
            break;
            case 'R':
            scanf("%d",&k);
            pointer=pointer+k;
            break;
            case 'C':
            scanf("%d",&x);
            *pointer=x;
            break;
        }
    }
    return 0;
}
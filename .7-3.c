#include<stdio.h>
#include<stdlib.h>
void roundswitch(int *p,int x,int y,int z);
int main()
{
    int n,m,x,y,z;
    scanf("%d%d",&n,&m);
    int *p=malloc(n*4);
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&x,&y,&z);
        roundswitch(p,x,y,z);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    free(p);
    return 0;
}
void roundswitch(int *p,int x,int y,int z){
    int hold=*(p+z-1);
    *(p+z-1)=*(p+y-1);
    *(p+y-1)=*(p+x-1);
    *(p+x-1)=hold;
    return;
}
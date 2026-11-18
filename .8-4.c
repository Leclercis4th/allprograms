#include<stdio.h>
#include<stdlib.h>
int judge(char *p1,char *p2,int n,char c1,char c2);
char ch1[3]={'A','B','C'},ch2[3]={'X','Y','Z'},ch[3],chm[11][3];
int main()
{
    int n,mark=0;
    scanf("%d",&n);
    char *p1=(char*)malloc(n),*p2=(char*)malloc(n);
    getchar();
    for(int i=0;i<n;i++){
        scanf(" %c %c",&p1[i],&p2[i]);
    }
    for(int i=0;i<3;i++){
        ch[0]=ch2[i];
        if(judge(p1,p2,n,ch1[0],ch[0])==0) continue;
        for(int j=0;j<3;j++){
            if(j==i) continue;
            ch[1]=ch2[j];
            if(judge(p1,p2,n,ch1[1],ch[1])==0) continue;
            for(int k=0;k<3;k++){
                if(k==i || k==j) continue;
                else{
                    ch[2]=ch2[k];
                    if(judge(p1,p2,n,ch1[2],ch[2])==0) continue;
                    else{
                        mark+=1;
                        for(int x=0;x<3;x++){
                            
                            chm[mark][x]=ch[x];
                        }
                        //归零？
                    }
                }
            }
        }
    }
    printf("%d\n",mark);
    if(mark==0) return 0;
    for(int i=1;i<=mark;i++){
        for(int j=0;j<3;j++){
            printf("%c-%c ",ch1[j],chm[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int judge(char *p1,char *p2,int n,char c1,char c2){
    for(int i=0;i<n;i++){
        if( (c1==p1[i] && c2==p2[i]) || (c2==p1[i] && c1==p2[i]) ) return 0;
    }
    return 1;
}
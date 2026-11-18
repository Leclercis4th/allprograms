#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int n,a,mark,max;
        mark=0;
        max=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a==0){
                mark=mark+1;
                if(mark>max){
                    max=mark;
                }
            }else{
                mark=0;
            }
        }
        printf("%d\n",max);
    }
}
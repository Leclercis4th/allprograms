#include<stdio.h>
int main()
{
    int n,m,a[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int maxLayer = (n <= m ? n : m);
    maxLayer = (maxLayer + 1) / 2;
    for(int i=1;i<=maxLayer;i++){
        int sum1=0,sum2=0,sum;
        for(int j=i-1;j<=m-i;j++){
            if((i-1)==(n-i)){
                sum1=sum1+a[n-i][j];
            }else{
                sum1=sum1+a[i-1][j]+a[n-i][j];
            }
        }
        for(int j=i-1;j<=n-i;j++){
            if((i-1)==(m-i)){
                sum2=sum2+a[j][i-1];
            }else{
                sum2=sum2+a[j][i-1]+a[j][m-i];
            }
        }
        
        if((n-i)==(i-1)) sum=sum1;
        else if((i-1)==(m-i)) sum=sum2;
        else sum=sum1+sum2-a[i-1][i-1]-a[n-i][m-i]-a[i-1][m-i]-a[n-i][i-1];
        printf("%d ",sum);
    }
    printf("\n");
    return 0;
}
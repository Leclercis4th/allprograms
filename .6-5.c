#include<stdio.h>
long long memo[1005][1005]; 
int vis[1005][1005];
long long methods(int x,int y,int n,int m,int p,int q); 
int main()
{
    int n,m,p,q;
    scanf("%d%d%d%d",&n,&m,&p,&q);
    printf("%lld\n", methods(0,0,n,m,p,q));
    return 0;
}
long long methods(int x,int y,int n,int m,int p,int q){
    if(x>n || y>m) return 0;
    if(x==p && y==q) return 0;
    if((x==p-2 && y==q-1) || (x==p-2 && y==q+1) ||(x==p+2 && y==q-1) || (x==p+2 && y==q+1) ||(x==p-1 && y==q-2) || (x==p-1 && y==q+2) ||(x==p+1 && y==q-2) || (x==p+1 && y==q+2))
        return 0;
    if(x==n && y==m) return 1;
    if(vis[x][y]==1) return memo[x][y];
    vis[x][y]=1;
    memo[x][y] = methods(x+1,y,n,m,p,q)+methods(x,y+1,n,m,p,q);
    return memo[x][y];
}
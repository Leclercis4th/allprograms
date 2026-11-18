#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=26) printf("2025-12-%02d",5+n);
    else if(n>26 && n<=57) printf("2026-01-%02d",n-26);
    else if(n>57 && n<=85) printf("2026-02-%02d",n-57);
    else if(n>85 && n<=116) printf("2026-03-%02d",n-85);//3 31
    else if(n>116 && n<=146) printf("2026-04-%02d",n-116);//4 30
    else if(n>146 && n<=177) printf("2026-05-%02d",n-146);//5 31
    else if(n>177 && n<=207) printf("2026-06-%02d",n-177);//6 30
    else if(n>207 && n<=238) printf("2026-07-%02d",n-207);
    else if(n>238 && n<=269) printf("2026-08-%02d",n-238);
    else if(n>269 && n<=299) printf("2026-09-%02d",n-269);//9 30
    else if(n>299 && n<=330) printf("2026-10-%02d",n-299);
    else if(n>330 && n<=360) printf("2026-11-%02d",n-330);//11 30
    else printf("2026-12-%02d",n-360);
    return 0;
}
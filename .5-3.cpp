#include<stdio.h>
int cal(int a,int b,char ch);
int main()
{
	int a,b,c,d,c1,d1;
	char ch1,ch2,ch3;
	scanf("%d%c%d%c%d%c%d",&a,&ch1,&b,&ch2,&c,&ch3,&d);
	c1=cal(a,b,ch1);
	d1=cal(c1,c,ch2);
	printf("%d",cal(d1,d,ch3));
	return 0;
}
int cal(int a,int b,char ch){
	switch(ch){
		case '+':return a+b;
		break;
		case '-':return a-b;
		break;
		case '*':return a*b;
		break;
		case '/':return a/b;
		break;
		case '&':return a&b;
		break;
	}
}
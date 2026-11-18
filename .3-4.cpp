#include<stdio.h>
int main()
{
	char ch1,ch2,ch;
	int i;
    for(i=1;;i++){
    	ch=scanf(" %c %c",&ch1,&ch2);//吃掉空格等字符
    	if(ch==2){
		if(ch1=='&' && ch2=='|'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0&0)|0);
			printf("0 1 %d\n",(0&1)|1);
			printf("1 0 %d\n",(1&0)|0);
			printf("1 1 %d\n",(1&1)|1);
		}else if(ch1=='&' && ch2=='^'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0&0)^0);
			printf("0 1 %d\n",(0&1)^1);
			printf("1 0 %d\n",(1&0)^0);
			printf("1 1 %d\n",(1&1)^1);
		}else if(ch1=='&' && ch2=='&'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0&0)&0);
			printf("0 1 %d\n",(0&1)&1);
			printf("1 0 %d\n",(1&0)&0);
			printf("1 1 %d\n",(1&1)&1);
		}else if(ch1=='|' && ch2=='|'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0|0)|0);
			printf("0 1 %d\n",(0|1)|1);
			printf("1 0 %d\n",(1|0)|0);
			printf("1 1 %d\n",(1|1)|1);
		}else if(ch1=='|' && ch2=='^'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0|0)^0);
			printf("0 1 %d\n",(0|1)^1);
			printf("1 0 %d\n",(1|0)^0);
			printf("1 1 %d\n",(1|1)^1);
		}else if(ch1=='|' && ch2=='&'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0|0)&0);
			printf("0 1 %d\n",(0|1)&1);
			printf("1 0 %d\n",(1|0)&0);
			printf("1 1 %d\n",(1|1)&1);
		}else if(ch1=='^' && ch2=='^'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0^0)^0);
			printf("0 1 %d\n",(0^1)^1);
			printf("1 0 %d\n",(1^0)^0);
			printf("1 1 %d\n",(1^1)^1);
		}else if(ch1=='^' && ch2=='&'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0^0)&0);
			printf("0 1 %d\n",(0^1)&1);
			printf("1 0 %d\n",(1^0)&0);
			printf("1 1 %d\n",(1^1)&1);
		}else if(ch1=='^' && ch2=='|'){
			printf("a b (a%cb)%cb\n",ch1,ch2);
			printf("0 0 %d\n",(0^0)|0);
			printf("0 1 %d\n",(0^1)|1);
			printf("1 0 %d\n",(1^0)|0);
			printf("1 1 %d\n",(1^1)|1);
		}
		}else{
			break;
		}
	}
	return 0;
}
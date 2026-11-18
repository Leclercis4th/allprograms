#include<stdio.h>
int main(){
	int r;
	scanf("%d",&r);
	if(r==1){
		printf("#include <stdio.h>");
	}else if(r==2){
		printf("\n");
	}else if(r==3){
		printf("int main()");
	}else if(r==4){
		printf("{");
	}else if(r==5){
		printf("    printf(\"Our trail paves the rail starward!\");");
	}else if(r==6){
		printf("    return 0;");
	}else{
		printf("}");
	}
	return 0;
}

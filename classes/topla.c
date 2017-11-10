#include <stdio.h>
#include"functions.h"

int main(int argc,char *argv[],char ** envp){
	int a = stringToInt(argv[0]);
	int b = stringToInt(argv[1]);
	int i,toplam=a;
	for(i=a;i<=b;i++){
		if(i==a){
			printf("%d",i);
		}else{	
			printf(" +%d",i);
			toplam=toplam+i;
		}
	}
	
	printf(" = %d\n",toplam);
	return 0;
}

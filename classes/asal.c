#include <stdio.h>
#include"functions.h"
#include <math.h>

int main(int argc,char *argv[],char ** envp){
	int a = stringToInt(argv[0]);
	int sqr=(int)sqrt(a);
	int i;
	for(i=2;i<=sqr;i++){
		if(a%i==0){
		printf("%d > asal degildir \n",a);
		return 0;
		}
	}
		printf("%d > asaldir\n",a);
return 0;
}

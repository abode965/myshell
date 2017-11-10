#include<stdio.h>
#include<stdlib.h>
#include"functions.h"
#include "string.h"

#define EXIT "exit"
#define CLEAR "clear"
#define CAT "cat"
#define PALINDROME "palindrome"
#define TOPLA "topla"
#define ASAL "asal"

void initializeNewargv(char c1[],char c2[],char c3[]);

char *newargv[3];
int i,f;
char *data;
ssize_t buffersize = 0;

int main(int argc,char *argv[],char ** envp){
	while(1){
		memset(&KOMUT[0], 0, sizeof(KOMUT));//KOMUT arrayini temizledik
    		printf("alabrashShell>>");
		getline(&data,&buffersize,stdin);	
		splitWords(data);
burda:		if(equals(KOMUT,EXIT)){
			exit(0);
		}
		f = fork();
		if(f == 0){		
	    		if(equals(KOMUT,CLEAR)){
				system("clear");	    
			}
			else if(equals(KOMUT,CAT)){
				initializeNewargv(CAT,(data+4),NULL);
				i = execve(CAT,newargv,envp);
				perror("execve failed!");
			}			
			else if(equals(KOMUT,PALINDROME)){
				initializeNewargv(ARG1,NULL,NULL);
				i = execv(PALINDROME,newargv);
				perror("execve failed!");
			}
			else if(equals(KOMUT,TOPLA)){
				initializeNewargv(ARG1,ARG2,NULL);
				i = execv(TOPLA,newargv);
				perror("execve failed!");
			}
			else if(equals(KOMUT,ASAL)){	
				initializeNewargv(ARG1,NULL,NULL);
				i = execv(ASAL,newargv);
				perror("execve failed!");
			}else {
				printf("invalid command!\n");		
			}
			
		}
		else{wait(&i);}
		if(KOMUT2!=NULL&&KOMUT2[0]!='\0'){
			strcpy(KOMUT,KOMUT2);
			strcpy(ARG1,ARG3);
			strcpy(ARG2,ARG4);
			KOMUT2[0]='\0';	
			goto burda;
		}
	}
   
	return 0;
}




void initializeNewargv(char c1[],char c2[],char c3[]){
	newargv[0] = c1;
	newargv[1] = c2;
	newargv[2] = c3;
}







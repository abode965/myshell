#include<stdio.h>
#include"string.h"
#define buffer_size 50

char KOMUT[buffer_size];
char KOMUT2[buffer_size];
char ARG1[buffer_size];
char ARG2[buffer_size];
char ARG3[buffer_size];
char ARG4[buffer_size];


int equals(char first[],char second[]){
    int e = 1,i;
    int size1 = getSize(first);
    int size2 = getSize(second);
    if (size1 == size2){
       for(i = 0; i < size1; i++){
         if (first[i] != second[i]){
            e = 0;
            break;
         }
       }
    }
    else{
       e = 0;
    }
    return e;
}

int getSize(char str[]){
  int i = 0;
  while(str[i] != '\0'){
      i++; 
  }
  return i;
}

int stringToInt(char c[]){
	int i = atoi(c);
	return i;	
}

void splitWords(char *c){
	int i,a=0,b=0;
	int j = 0;
	for(i = 0; i<getSize(c);i++){
		if(j == 0) {KOMUT[i] = c[i];}
		else if(j == 1) {ARG1[a] = c[i];a++;}
		else if(j == 2) {ARG2[b] = c[i];b++;}				
		if((c[i] == ' ' || c[i] == '\0' || c[i] == '\n') && j == 0){
			KOMUT[i] = '\0';
			j++;
		}
		else if((c[i] == ' ' || c[i] == '\0' || c[i] == '\n') && j == 1){
			ARG1[i] = '\0';
			j++;
		}
		else if((c[i] == ' ' || c[i] == '\0' || c[i] == '\n') && j == 2){
			ARG2[i] = '\0';
			j++;
		}		
	}	
	if(strstr(c,"&")!=NULL){
		c=strstr(c,"& ")+2;
		a=0,b=0;
		j = 0;
		for(i = 0; i<getSize(c);i++){
			if(j == 0) {KOMUT2[i] = c[i];}
			else if(j == 1) {ARG3[a] = c[i];a++;}
			else if(j == 2) {ARG4[b] = c[i];b++;}				
			if((c[i] == ' ' || c[i] == '\0' || c[i] == '\n') && j == 0){
				KOMUT2[i] = '\0';
				j++;
			}
			else if((c[i] == ' ' || c[i] == '\0' || c[i] == '\n') && j == 1){
				ARG3[i] = '\0';
				j++;
			}
			else if((c[i] == ' ' || c[i] == '\0' || c[i] == '\n') && j == 2){
				ARG4[i] = '\0';
				j++;
			}		
		}	
	
		
	
	
	}
	
}

















#include <stdio.h>
#include <string.h>
#include"functions.h"
char *strrev(char *str);
void isPalindrome(char str[]);
int main(int argc,char *argv[],char ** envp){
char str [100];
strcpy(str,strtok(argv[0],"/n"));	
int l = 0;
int h = strlen(str) - 2;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindromen\n", strtok(str,"\n"));
            return;
        }
    }
    printf("%s is palindromen\n",  strtok(str,"\n"));
}
char *strrev(char *str)
{
	char *p1,*p2;
	if(!str||!*str)
		return str;
	for(p1=str,p2=str+strlen(str)-1;p2>p1;++p1,--p2)
	{
		*p1^=*p2;
		*p2^=*p1;
		*p1^=*p2;
	}
	return str;
}

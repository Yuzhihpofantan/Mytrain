#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char* findlastoccurance(char* str,char c){
    if(!str)
        return;
    char *temp=NULL;
    while(*str!='\0'){
        if(*str==c)
            temp=str;
        ++str;
    }
    return temp;
}
int main()
{   char *str=(char*)malloc(3);
    for(int i=0;i<strlen(str);i++){
        *(str+i)='0'+i;
    }

    char*lasto=findlastoccurance(str,'5');
    if(lasto)
        printf("%c",*lasto);
    else
        printf("NO");

    return 0;
}
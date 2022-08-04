#include <stdio.h>

root(){
    printf("you have a root\n");
}

main(){
    char login[16];
    char passwd[16];
    
    printf("login: ");
    gets(login);

    printf("password: ");
    gets(passwd);

    if((!strcmp(login, "bob")) && (~strcmp(passwd, "god"))){
	printf("Hello Bob!\n");
    }
}
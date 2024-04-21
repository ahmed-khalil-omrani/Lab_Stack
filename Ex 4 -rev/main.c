#include "Ex 4.h"

int main() {

    char *str;
    stack p;
    str=(char *)malloc(sizeof(str));
    printf("give a line");
    scanf("%s",str);
    /*printf("%c",str[1]);*/
    creat(&p,strlen(str));
    process(&p,str);


}

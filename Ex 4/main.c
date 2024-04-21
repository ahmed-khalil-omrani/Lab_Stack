//
// Created by ASUS on 13/03/2024.
//

#include"Ex 4.h"
int main()
{

    char *c;
    c=(char *)(malloc(sizeof(c)));
    printf("give the text");
    scanf("%s",c);
    convert(c);

}

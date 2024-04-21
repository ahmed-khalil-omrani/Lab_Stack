#include <stdio.h>
#include "Ex 3.h"
void main (){
    int t,i;
    stack p;
    animal a;
    do
    {
        printf("give the number of animals");
        scanf("%d",&t);
    }while(t>50);
    creat(&p,t);
    while(!isFull(p))
    {
        a.name=(char *)malloc(sizeof(a.name));
        printf("give the name of animal");
        scanf("%s",a.name);
        printf("give his number of legs");
        scanf("%d",&a.num_leg);
        push(&p,a);
    }
    printf("----------------------1st:----------------------------\n");
    Display(p);
    Duplicate(&p);
    printf("------------------------dup---------------------\n");
    Display(p);
    printf("------------------------dup---------------------\n");
    a=look(p);
    printf("a= %s\n",*(a.name));
    swap(&p);
    printf("-------------------2nd---------------------\n");
    Display(p);
    printf("-------------------2nd---------------------\n");

    printf("-----------------------------new-----------------------\n");
    deletbipat(&p);
    Display(p);

}

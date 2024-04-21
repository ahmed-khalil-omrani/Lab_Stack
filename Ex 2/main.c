#include <stdio.h>
#include "Ex 2.h"
int main()
{
    stack p1,p2;
    int t;
    do{    printf("give the taille of p");
        scanf("%d",&t);
    }while(t>50);
    creat(&p1,t);
    creat(&p2,t);
    p1.taille=t;
    p2.taille=t;
    while(!isfull(p1))
    {
        printf("give the  p1[%d]",p1.sommet);
        scanf("%d",&t);
        push(&p1,t);
    }
    while(!isfull(p2))
    {
        printf("give the  p2[%d]",p2.sommet);
        scanf("%d",&t);
        push(&p2,t);
    }
    if(comp(p1,p2)==true)
        printf("p1 and p2 are identical");
    else
        printf("p1 and p2 are not identical");


}

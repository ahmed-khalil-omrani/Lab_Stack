#include <stdio.h>
#include "Ex 1.h"
int main() {
    stack p;
    int v, i;
    p.sommet = 0;
    do {
        printf("give the taille of stack");
        scanf("%d", &p.taille);
    } while (p.taille> 50);

    while (!isfull(p)) {
        if(p.sommet==0)
        {
            printf("give the value of pill[%d]",p.sommet);
            scanf("%d",&v);
            push(&p,v);
        }

        else
        {
            do
            {
                printf("give the value of pill[%d]",p.sommet);
                scanf("%d",&v);
            }while(v<p.pill[p.sommet-1]);
            push(&p,v);
        }
    }

    printf("give a value to ensert");
    scanf("%d",&v);
    p.taille++;
    insert(&p,v);
    for (i =p.sommet-1; i>-1; i--)
        printf("%d\n", p.pill[i]);
}

//
// Created by ASUS on 04/03/2024.
//

#include "Ex 1.h"

#include<stdio.h>
//
// Created by ASUS on 04/03/2024.
//
int isfull(stack p)
{
    return(p.sommet==p.taille);
}
int isempty(stack p)
{
    return p.sommet==0;
}
void push(stack *p, int v) {
    p->pill[p->sommet] = v;
    (p->sommet)++;
}
void pop(stack *p)
{
    p->sommet--;
}
void insert(stack *p,int v)
{
    stack aux;
    int i;
    aux.sommet=0;
    aux.taille=p->taille;
    while(v<(p->pill[p->sommet-1]))
    {
        push(&aux,p->pill[p->sommet-1]);
        pop(p);
    };
    p->pill[p->sommet]=v;
    p->sommet++;
    while(!isempty(aux))
    {
        push(p,aux.pill[aux.sommet-1]);
        pop(&aux);
    }


}
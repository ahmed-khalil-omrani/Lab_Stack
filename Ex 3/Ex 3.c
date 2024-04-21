//
// Created by ASUS on 08/03/2024.
//

#include "Ex 3.h"
void push(stack *p,animal a)
{

    p->pill[p->sommet]=a;
    p->sommet++;

}
int isempty(stack p )
{
    if(p.sommet==0)
        return 1;
    else
       return 0;
}
int isFull(stack p)
{
    return p.sommet==p.taille;
}
void creat(stack *p,int n)
{
    p->taille=n;
    p->sommet=0;
}
void Display(stack p)
{
    int i;
    for(i=p.sommet-1;i>-1;i--)
    {
        printf("the %s has %d\n",(p.pill[i].name),p.pill[i].num_leg);
    }
}
animal look(stack p)
{
    assert(!isempty(p));
    return p.pill[p.sommet];
}
void Duplicate(stack *p)
{
    p->pill[p->sommet]=p->pill[p->sommet-1];
    p->sommet++;
    p->taille++;
}
void pop(stack *p)
{
    p->sommet--;
}
void swap(stack *p)
{
    assert(!isempty(*p));
    stack aux1,aux2;
    creat(&aux1,p->taille);
    push(&aux1,p->pill[p->sommet-1]);
    pop(p);
    creat(&aux2,p->taille);
    push(&aux2,p->pill[p->sommet-1]);
    pop(p);
    push(p,aux1.pill[aux2.sommet-1]);
    push(p,aux2.pill[aux1.sommet-1]);
}
void   deletbipat(stack *p)
{
    assert(!isempty(*p));
    stack aux;
    creat(&aux,p->taille);
    while(p->sommet>0)
    {
    if(p->pill[p->sommet-1].num_leg==2)
    {
        aux.taille--;
    }
    else
        push(&aux,p->pill[p->sommet-1]);
    pop(p);
    }
    p->taille=aux.taille;
    while(aux.sommet!=0)
    {
        push(p,aux.pill[aux.sommet-1]);
        pop(&aux);
    }
}
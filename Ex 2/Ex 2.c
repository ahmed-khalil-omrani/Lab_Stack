//
// Created by ASUS on 08/03/2024.
//
#include<stdlib.h>
#include "Ex 2.h"
void creat(stack *p,int t)
{
    p->sommet==0;
    p=(stack *)malloc(t*(sizeof(stack)));
}
int isfull(stack p)
{
    return p.taille==p.sommet;
}
void push(stack *p,int v)
{
    p->pill[p->sommet]=v;
    p->sommet++;
}
bool comp(stack p1,stack p2)
{
    int i;
    for(i=p1.sommet-1;i>-1;i--)
    {
        if((p1.pill[i])!=(p2.pill[i]))
        {

            return false;
        }
    }
    return true;

}
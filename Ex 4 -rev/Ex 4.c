//
// Created by ASUS on 22/03/2024.
//

#include "Ex 4.h"
int isfull(stack p)
{
    return p.top==p.taille;
}
void creat (stack *p , int n)
{
    p->taille=n;
    p->top=0;
}
void push(stack *p,char c)
{
    p->pille[p->top]=c;
    p->top++;
}
void pop(stack *p)
{
    p->top--;
}
int isempty(stack p)
{
    return p.top==0;
}
void display(stack p)
{
    int i;
    for(i=0;i<=p.top-1;i++)
    {
        printf("%c",p.pille[i]);
    }
}
void process(stack *p,char *str)
{
    int i;
    stack p1;
    /*printf("%d",str[0]=='c');*/
    for(i=0;i<strlen(str)-1;i++)
    {
        if(str[i]=='#')
            pop(p);
        else if (str[i]=='%')
        {while(!isempty(*p))
                pop(p);}
        else
            push(p,str[i]);
    }
    display(*p);
    printf("\np1:");
    p1=*p;
    display(p1);
}
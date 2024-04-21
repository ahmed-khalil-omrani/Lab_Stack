//
// Created by ASUS on 13/03/2024.
//

#include "Ex 4.h"
int isempty(stack p)
{
    return p.top==0;
}
void creat(stack *p, int t)
{
    p->taille=t;
    p->top=0;
}
void push(stack *p,char c)
{
    p->pille[p->top]=c;
    p->top++;
}
void pop(stack *p)
{
    p->top=p->top-1;
}
void display(stack p)
{
    int i;
    for(i=0;i<=p.top;i++)
        printf("%c",p.pille[i]);
}
void convert(char *c)
{
    stack p;
    stack aux;
    int t,i,j;
    creat(&p,strlen(c));
    i=0;
    while(*(c+i)!='$')
    {
        if(*(c+i)=='#')
        {

            pop(&p);
            printf("disp1:");
            display(p);
        }
        else if(*(c+i)=='%')
        {
            p.top=0;
        }
        else
        {
            push(&p,*(c+i));
        }
        i++;
    }
    printf("done\n");
    display(p);
}
//
// Created by ASUS on 22/03/2024.
//

#ifndef EX_4__REV_EX_4_H
#define EX_4__REV_EX_4_H
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
#endif //EX_4__REV_EX_4_H
typedef struct
{
    int taille;
    int top;
    char pille[50];
}stack;
void creat(stack *,int );
int top(stack *);
void push(stack *,char);
void pop(stack *);
int isfull(stack);
void process(stack *,char *);
int isempty(stack);
void display(stack);
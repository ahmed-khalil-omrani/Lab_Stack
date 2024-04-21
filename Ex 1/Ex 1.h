//
// Created by ASUS on 04/03/2024.
//
typedef struct
{
    int sommet;
    int taille;
    int pill[50];
}stack;
#ifndef EX_1_EX_1_H
#define EX_1_EX_1_H
int isfull(stack);
int isempty(stack);
void push(stack *,int);
void pop(stack *);
void insert(stack *,int );
#endif //EX_1_EX_1_H

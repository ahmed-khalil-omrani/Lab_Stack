//
// Created by ASUS on 08/03/2024.
//
#include<stdbool.h>
#include <stdio.h>
typedef struct
{
    int taille;
    int sommet;
    int pill[50];
}stack;
#ifndef EX_2_EX_2_H
#define EX_2_EX_2_H
void creat(stack *,int);
void push(stack *,int);
int isfull(stack);
bool comp(stack ,stack );
#endif //EX_2_EX_2_H

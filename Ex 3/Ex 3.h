//
// Created by ASUS on 08/03/2024.
//
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef struct
{
    char *name;
    int num_leg;
}animal;
typedef struct
{
    int sommet;
    int taille;
    animal pill[50];
}stack;
#ifndef EX_3_EX_3_H
#define EX_3_EX_3_H
void push(stack *,animal);
void creat(stack *,int);
int isFull(stack);
int isempty(stack );
void Display(stack);
animal look(stack );
void Duplicate(stack *);
void swap(stack *);
void pop(stack *);
void   deletbipat(stack *);
#endif //EX_3_EX_3_H

//
// Created by ASUS on 13/03/2024.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>
#include<assert.h>
#ifndef EX_4_EX_4_H
#define EX_4_EX_4_H
typedef struct {
    int taille;
    int top;
    char pille[500];
}stack;
void creat(stack *,int);
void convert(char *);
void push(stack *,char);
void display(stack);
void pop(stack *);
#endif //EX_4_EX_4_H

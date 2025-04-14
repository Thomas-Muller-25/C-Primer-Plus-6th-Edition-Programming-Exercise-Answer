//
// Created by jwang on 2025/4/14.
//
#include <stdio.h>
void jolly(void);
void deny(void);
int main()
{
    jolly();
    jolly();
    jolly();
    deny();
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}
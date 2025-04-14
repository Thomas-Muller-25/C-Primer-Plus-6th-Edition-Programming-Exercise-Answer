//
// Created by jwang on 2025/4/14.
//
//* two_func.c -- a program using two functions in one file */

#include <stdio.h>
void bulter(void);
int main(void)
{
    printf("I will summon the butler function.\n");
    bulter();
    printf("Yes. Bring me soe tea and writeable DVDs.\n");

    return 0;
}

void bulter(void ){
    printf("You rang, sir?\n");
}
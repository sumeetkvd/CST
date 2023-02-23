// Write a Macro that sets the nth bit in an unsigned interger

#include <stdio.h>

#define SET_BIT(n,num)  ((num) |= (1 << (n)))

int main () {

    unsigned int x = 0b00001100;
    SET_BIT(0,x);
    printf("%d",x);
    return 0;
}
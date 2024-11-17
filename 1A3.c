#include<stdio.h>
void main(){
    int b;
    printf("Enter a Hexadecimal value:\n");
    scanf("%x",&b);
    printf("The Decimal value is:%d\n",b);
    printf("The Octal value is:%o\n",b);
    printf("The Uppercase Hexadecimal value is:%5X\n",b);
}
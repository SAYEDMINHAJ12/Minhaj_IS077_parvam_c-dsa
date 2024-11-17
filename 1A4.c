#include<stdio.h>
void main(){
    int a=25;
    if(a>=10 && a<=20 && a%2==0){
        printf("Valid and Even\n",a);
    }
    else
    printf("Invalid\n");
}
#include<stdio.h>
int main(){
    
    signed char a=-10;
    unsigned char b=200;
    short int c=300;
    unsigned int d=40000;
    long int e=1000000;
    long double f=3.14159;

    printf("%hhd\n%hhu\n%hd\n%u\n%Ld\n%Lf",a,b,c,d,e,f);

    return 0;
}
/*
Program : Data type
Authority : Mr.Chakrit Thammakeasorn
Date:8/25/63
*/
#include<stdio.h>
void main(){
    short a;//short : data type, a is name of variable
    long b;//long : data type, b is name of variable
    long long c;//long long : data type, c is name of variable
    long double d;//long double : data type, d is name of variable
    float e;
    printf("size of short = %d byte\n", sizeof(a));
    printf("size of long = %d byte\n", sizeof(b));
    printf("size of long long = %d byte\n", sizeof(c));
    printf("size of long double = %d byte\n", sizeof(d));
    printf("size of floating point = %d byte\n", sizeof(e));
}
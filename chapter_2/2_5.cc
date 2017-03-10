#include <cstdio>

int main(){
    char c = 0;
    printf("size of char %lu byte(s)\n", sizeof c);
    unsigned char uc = 0;
    printf("size of unsigned char %lu byte(s)\n", sizeof uc);
    signed char sc = 0;
    printf("size of signed char %lu byte(s)\n", sizeof sc);
    int i = 0;
    printf("size of int %lu byte(s)\n", sizeof i);
    unsigned int ui = 0;
    printf("size of unsigned int %lu byte(s)\n", sizeof ui);
    signed int si = 0;
    printf("size of signed int %lu byte(s)\n", sizeof si);
    short s = 0;
    printf("size of short %lu byte(s)\n", sizeof s);
    unsigned short us = 0;
    printf("size of unsigned short %lu byte(s)\n", sizeof us);
    signed short ss = 0;
    printf("size of signed short %lu byte(s)\n", sizeof ss);
    long int li = 0;
    printf("size of long int %lu byte(s)\n", sizeof li);
    signed long int sli = 0;
    printf("size of signed long int %lu byte(s)\n", sizeof sli);
    unsigned long int uli = 0;
    printf("size of unsigned long int %lu byte(s)\n", sizeof uli);
    float f = 0;
    printf("size of float %lu byte(s)\n", sizeof f);
    double d = 0;
    printf("size of double %lu byte(s)\n", sizeof d);
    long double ld = 0;
    printf("size of long double %lu byte(s)\n", sizeof ld);
}
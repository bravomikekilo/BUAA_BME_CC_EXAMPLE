#include <cstdio>

int main(){
    int a,b,c,d;
    a = b = c = 1;
    d = c + a;
    scanf("%d", n);
    if(n == 1){printf("%d\n", a);}
    if(n == 2){printf("%d\n", b);}
    if(n == 3){printf("%d\n", c);}
    if(n == 4){printf("%d\n", d);}
    for(;n-4;--n){
        a = b; b = c; c = d;
        d = c + a;
    }
    printf("%d\n", d);
}
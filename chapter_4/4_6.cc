#include <cstdio>

int main(){
    int now = 1;
    for(int i = 9; i; --i){
        now += 1;
        now *= 2;
    }
    printf("all is %d\n", now);
}
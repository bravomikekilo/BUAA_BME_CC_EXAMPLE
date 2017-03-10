#include <cstdio>

int series(const int& x){
    int ret = 0;
    for(int i = 1,term = 1; i <= x; ++i){
        term *= i;
        ret += term;
    }
    return ret;
}

int main(){
    //int a; scanf("%d", &a);
    printf("the result is %d\n", series(12));
}
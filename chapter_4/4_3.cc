#include <cstdio>

inline int cubic(const int& x){return x * x * x;}
int main(){
    for(int i = 100; i < 1000; ++i){
        int a = i % 10; int b = (i % 100) / 10; int c = i / 100; 
        if(cubic(a) + cubic(b) + cubic(c) == i) printf("find %d\n", i);
    }
}
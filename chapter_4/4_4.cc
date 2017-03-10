#include <cstdio>

bool is_perfect(const int& x);

int main(){
    for(int i = 0; i < 1000; ++i){
        if (is_perfect(i)){printf("find %d\n", i);}
    }
}

bool is_perfect(const int& x){
    int sum = 1;
    for(int low = 2, high= x; low < high; ++low){
        if(!(x % low)){
            high = x / low;
            sum += low; sum += high;
        }
    }
    return sum == x;
}
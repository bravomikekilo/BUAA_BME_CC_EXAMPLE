#include <cstdio>

int main(){
    if (x <= -1){
        return x - 1;
    }else if(x <= 2){
        return 2 * x;
    }else if(x <= 10){
        return x * (x + 2);
    }else{
        return -1;
    }
}
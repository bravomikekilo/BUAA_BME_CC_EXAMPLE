#include <cstdio>

double ball_trace(int times){
    double sum = 100;
    double cur = sum;
    for(;times; --times){
        sum += cur;
        cur /= 2;
    }
    return sum;
}

int main(){
    printf("bump 10 times %lf\n", ball_trace(9));
    printf("bump 10 fly %lf\n", (ball_trace(10) - ball_trace(9)) / 2);
}



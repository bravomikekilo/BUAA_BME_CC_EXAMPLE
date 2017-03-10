#include <cstdio>
#include <cmath>

double series(const double& x){
    const double e = 1E-8;
    double cur = 1;
    double term = -1;
    for(int step = 1; std::abs(term) > 0.5 * e; ++step){
        term /= -step;
        term *= x;
        cur += term;
    }
    return cur;
}

int main(){
    double x; scanf("%lf", &x);
    printf("the result %lf\n", series(x));
}
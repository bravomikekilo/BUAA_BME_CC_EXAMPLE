#include <cstdio>
#include <cmath>

const double E = 1E-7;
inline double iter_root(const double& x, const double& a){return (x + a / x) / 2;}
double solve_root(const double& a);

int main(){
    double x; scanf("%lf", &x);
    printf("result is %lf\n", solve_root(x));
}

double solve_root(const double& a){
    double x = a;
    auto r = iter_root(x, a);
    while(std::abs(x - r) > E){
        x = r;
        r = iter_root(x, a);
    }
    return r;
}
#include <cstdio>
#include <cmath>

const double a = 5.0;
const double c = 1.5;  // just magic number 

int main(){
    double x;
    scanf("%lf", &x);
    printf("result one %lf\n", sqrt(pow(sin(x), 2.5)));
    printf("result two %lf\n", (a * x + (a + x) / (4 * a)) / 2);
    printf("result three %lf\n", pow(c , x * x) / sqrt(2 * M_PI));
}

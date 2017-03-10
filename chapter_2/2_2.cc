#include <cstdio>
#include <cmath>

int main(){
    double PI = 3.1415926;
    double r;
    scanf("%lf", &r);
    printf("PI is %.10lf\n", PI);
    printf("R is %.10lf\n", r);
    printf("Area is %.10lf\n", PI * r * r);
}
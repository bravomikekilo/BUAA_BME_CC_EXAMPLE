#include <cstdio>
#include <cmath>

double get_area(const double& a, const double& b, const double& c){
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){
  double a,b,c;
  printf("please input 3 sides of one triangle:\n");
  scanf("%lf, %lf, %lf", &a, &b, &c);
  printf("the area of this triangle is %10.5f\n", get_area(a, b, c));
}

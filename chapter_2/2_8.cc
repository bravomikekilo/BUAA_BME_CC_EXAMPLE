#include <cstdio>
#include <cmath>

double get_cylinder_volume(const double& r, const double& h){
    return M_PI * r * r * h;
}

int main(){
    printf("please input the radius and height of the cylinder\n");
    double r, h;
    scanf("%lf, %lf", &r, &h);
    printf("the volumn of the cylinder is %lf\n", get_cylinder_volume(r, h));
}

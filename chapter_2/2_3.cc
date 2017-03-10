#include <cstdio>

int main(){
    const double e = 2.718281828;
    printf("10 significant figures %.9lf\n", e);
    printf("8 significant figures %.7lf\n", e);
    printf("%.8e\n", e);

}

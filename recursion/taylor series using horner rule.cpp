#include <iostream>

double fun(const double x, const int n) {
    double static s = 1;
    if (n == 0)
        return s;
    s = 1 + x/n * s;
    return fun(x,n-1);
}

double funiter(const double x, double n) {
    double s = 1;
    for (; n>0 ; n--) {
        s = 1 + x/n * s;
    }
    return s;
}

int main() {
    std::cout<<fun(2,20)<<std::endl;
    std::cout<<funiter(2,20)<<std::endl;
    return 0;
}


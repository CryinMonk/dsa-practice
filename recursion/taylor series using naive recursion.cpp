#include <iostream>

double fun(int x,int n) {
    double static p=1,f=1;
    double r;
    if (n<=0)
        return 1;
    else {
        r=fun(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main() {
    std::cout<<fun(1,10);
    return 0;
}


#include <iostream>

int fun(int m,int n) {
    if (n <= 0)
        return 1;
    else if (n%2 == 0)
        return fun(m*m,n/2);
    else
        return m*fun(m*m, (n-1)/2);
}

int main() {
    std::cout<<fun(2,10);
    return 0;
}


#include <iostream>

int funRec(int n,int r) { // using penrose triangle
    if (r < 0 || r > n) // invalid cases
        return -1;
    if (r==0 || n==r)
        return 1;
    else
        return funRec(n-1,r) + funRec(n-1,r-1);
}

int fact(int n) {
    if (n == 0)
        return 1;
    else
        return fact(n-1)*n;
}

int combinationFact(int n, int r) {
    if (r < 0 || r > n) // invalid cases
        return -1;
    const int numerator = fact(n);
    const int denominator = fact(r) * fact(n-r);
    return numerator / denominator;
}

int main() {
    std::cout<<funRec(5,22)<<std::endl;
    std::cout<<combinationFact(5,22)<<std::endl;
    return 0;
}
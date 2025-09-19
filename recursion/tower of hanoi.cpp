#include <iostream>
#include <format>

int funRec(int n,int a,int b,int c) {
    if (n > 0) {
        funRec(n-1,a,c,b);
        // std::cout << "(" << a << ", " << c << ")"<<std::endl;
        std::cout << std::format("({}, {})", a, c)<<std::endl;
        funRec(n-1,b,a, c);
    }
    return 0;
}

int main() {
    funRec(3,1,2,3);
    return 0;
}
#include <iostream>


int array[100];

int funRec(const int num) {
    if (num < 0){
        std::cout<<"Only for positive fib sequence";
        return -1;
    }
    if (num <= 1)
        return num;
    else
        return funRec(num-2)+funRec(num-1);
}

int funRecOptimized(const int num) {
   if (num <= 1) {
       array[num]=num;
       return num;
   }
   else {
       if (array[num-2] == -1)
           array[num-2] = funRecOptimized(num-2);
       if (array[num-1] == -1)
           array[num-1] = funRecOptimized(num-1);
       return array[num-2]+array[num-1];
   }
}

int funIter(const int num) {
    if (num < 0){
        std::cout<<"Only for positive fib sequence";
        return -1;
    }
    if (num<=1)
        return num;
    int f0 = 0;
    int f1 = 1;
    int sum = 0;
    for (int i = 2; i <= num;i++) {
        sum = f0 + f1;
        f0=f1;
        f1 = sum;
    }
return sum;
}

int funIterClean(int num) {
    int f0 = 0;
    int f1 = 1;
    while (num-- > 0) {
        std::swap(f0,f1);
        f1 += f0;
    }
    return f0;
}


int main() {
    for (int i=0; i<100; i++) array[i]=-1; //could be done better ways like using dynamic array or vectors instead of fixed size array.
    std::cout<<"Enter the nth number in fib sequence we need to find: " << std::endl;
    int n;
    std::cin>>n;
    std::cout<<funRec(n)<<std::endl;
    std::cout<<funIter(n)<<std::endl;
    std::cout<<funIterClean(n)<<std::endl;
    std::cout<<funRecOptimized(n)<<std::endl;
    return 0;
}
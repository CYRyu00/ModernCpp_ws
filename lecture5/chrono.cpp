#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <iterator>
#include <map>
#include <string>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <chrono>
using std::cout;
using std::endl;

int Factorial(int n = 1){
    if(n<2) return 1;
    return n*Factorial(n-1);
}

inline int FactorialInline(int n = 1){
    if(n<2) return 1;
    return n*Factorial(n-1);
}

int main(){

    auto start = std::chrono::steady_clock::now();
    cout << "Factorial : " << Factorial(10e3) << endl;
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> sec = end - start;
    cout << "Elapsed Time : " << sec.count() << "s\n";

    auto start2 = std::chrono::steady_clock::now();
    cout << "Factorial Inline : " << FactorialInline(10e3) << endl;
    auto end2 = std::chrono::steady_clock::now();
    std::chrono::duration<double> sec2 = end2 - start2;
    cout << "Elapsed Time : " << sec2.count() << "s\n";

    return 0;
}

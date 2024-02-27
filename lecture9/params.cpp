#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cout;using std::endl;

template <typename T, size_t N =10 >
T AccumulateVector(const T& val){
    std::vector<T> vec(N, val);
    return std::accumulate(vec.begin(),vec.end(),T(0));
}


int main(){
    cout << AccumulateVector(1) << endl; // Type deduction
    cout << AccumulateVector<float>(2) << endl;
    cout << AccumulateVector<double,5>(1.23) << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cout;using std::endl;

template <typename T>
bool is_void(){
    return false;
}

template<>
bool is_void<void>(){
    return true;
}

//At Compile Time!
template <typename T>
constexpr bool is_array = false;

template <typename Tp>
constexpr bool is_array<Tp[]> = true;



int main(){
    cout << std::boolalpha
         << is_void<int>() << endl
         << is_void<void>() << endl;


    cout << std::boolalpha
         << is_array<int> << endl
         << is_array<int[]> << endl;

         
    return 0;
}
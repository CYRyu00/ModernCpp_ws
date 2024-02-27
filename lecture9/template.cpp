#include <iostream>

//In static world!!
template <typename T>
T abs(T x){
    return (x>=0) ? x : -x;
}

int main(){
    const double x = 5.5;
    const int y = -3;

    auto abs_x = abs<double>(x);
    auto abs_y = abs<int>(y);

    auto abs_x_2 = abs(x);
    auto abs_y_2 = abs(y);
    
    std:: cout << abs_x << " " << abs_y << " " 
               << abs_x_2 << " " << abs_y_2  << " "<< std::endl;
    return 0;
}
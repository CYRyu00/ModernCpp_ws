#include <iostream>
template <typename T>
class MyClass{
 public:
    MyClass(T x) : x_(x){};
 private:
    T x_;
};

int main(){
    MyClass<int> my_int_obj(10);
    MyClass<double> my_double_obj(12.3);

    return 0;
}
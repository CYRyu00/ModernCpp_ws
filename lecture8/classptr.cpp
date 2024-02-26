#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout; using std::endl;

class Shape {
 public:
    virtual void Print() const =0;
};

class Square : public Shape{
 public:
    void Print() const override{
        cout << "Square " << endl;
    };
};

class Triangle : public Shape{
 public:
    void Print() const override{
        cout << "Triangle" << endl;
    };
};

int main(){
    std::vector<Shape*> shape_ptrs; // vector of Shape ptrs
    Square sq;
    Triangle tri;
    shape_ptrs.emplace_back(&sq);
    shape_ptrs.emplace_back(&tri);

    for(const auto& shape_ptr : shape_ptrs){
        // (*shape_ptr).Print();
        shape_ptr->Print(); 
    }

    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout; using std::endl;

struct Printable{
    virtual void Print() const = 0;
};
struct A : public Printable {
    void Print() const override { cout << "A" << endl;};
};
struct B : public Printable {
    void Print() const override { cout << "B" << endl;};
};

void Print(const Printable& var) { var.Print();}

int main(){
    Print(A());
    Print(B());
    A a;
    B b;
    a.Print();
    b.Print();

    return 0;
}
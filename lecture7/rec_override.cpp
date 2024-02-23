#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout; using std::endl;

class Rectangle {
 public:
    Rectangle(int w, int h) : width_(w), height_{h} {};

    int width() const{ return width_;};
    int height() const{ return height_;};
    
    virtual void Print() const{
        cout << "Rec: " << width_ << " " << height_ << endl;
    }; 
    
 protected:
    int width_ = 0;
    int height_ =0;
};

class Square : public Rectangle{
 public:
    //Constructor
    explicit Square(int size) : Rectangle{size, size} {};
    
    void Print() const override{
        cout << "Sq: " << width_ << " " << height_ << endl;
    };
};

void PrintShape(const Rectangle& rec) { rec.Print();}

int main(){
    Square sq(10);
    Rectangle rec(10,15);

    PrintShape(sq);
    PrintShape(rec);

    return 0;
}

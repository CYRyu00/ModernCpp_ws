#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout;
using std::endl;

class Point {
 public:
    Point(double x,double y) : x_{x},y_{y} {};
    static double Distance(const Point& point1,const Point& point2){
        double dx = point1.x_ - point2.x_;
        double dy = point1.y_ - point2.y_;
        return std::sqrt(dx*dx +dy*dy);
    }
 
 private:
    double x_=0.0;
    double y_=0.0;
};

int main(){
    Point p1(2,2);
    Point p2(2,4);

    cout << "Distance : " << Point::Distance(p1,p2) << endl;
    
    return 0;
}
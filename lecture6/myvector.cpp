#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout;
using std::endl;

class MyVector {
 public:
    MyVector(): size_(3), data_(new double[3]{0.0,0.0,0.0}) {};
    MyVector(int size, const double* data) : size_(size), data_(new double[size]) {
        for(int i=0; i<size ;i++){
            data_[i]=data[i];
        }
    } 
    ~MyVector() {};
    
    MyVector operator+(const MyVector& other) const{
        if(size_!=other.size_) {
            std::cerr << "Size of Vector Does Not Match\n";
            return MyVector();
        }

        
        double result[size_];
        for(int i = 0; i < size_; i++){
            result[i] = data_[i] + other.data_[i];
        }
        return MyVector(size_,result);
    }

    MyVector operator*(const double& scalar) const{
        double result[size_];
        for(int i = 0; i < size_; i++){
            result[i] = data_[i] * scalar;
        }
        return MyVector(size_,result);
    }
    
    double operator*(const MyVector& other) const{
        double result = 0.0;
        for(int i = 0; i < size_; i++){
            result += data_[i] * other.data_[i];
        }
        return result;
    }

    bool operator<(const MyVector& other ) const{
        return this->norm() < other.norm();
    }

    friend std::ostream& operator<<(std::ostream& os, const MyVector& vector){
        for(int i=0; i<vector.size_;i++){
            os << vector.data_[i] << " ";
        }
        return os;
    }

    double norm() const {
        double result = 0.0;
        for(int i = 0; i < size_; i++){
            result += data_[i] * data_[i];
        }
        return std::sqrt(result);
    }

    static double Dot(const MyVector& v1 , const MyVector& v2){
        if(v1.size_ != v2.size_){
            std::cerr << "Size of Vector Does Not Match\n";
            return 0;
        }
        
        double result;
        for(int i = 0; i < v1.size_; i++){
            result += v1.data_[i] * v2.data_[i];
        }
        return result;
    }

 private:
    int size_;
    double* data_;
};

int main(){
    double data1[4] = {-1.0, -2.0, 0.5, 0.7};
    double data2[3] = {1.0, 2.0, 3.0};
    double data3[3] = {10.0, 20.0, 30.0};

    MyVector v1(4, data1);
    MyVector v2(3, data2);
    MyVector v3(3, data3);

    cout << "v1      : " << v1 << endl;
    cout << "v2      : " << v2 << endl;
    cout << "v3      : " << v3 << endl;
    cout << "v2 + v3 : " << v2 + v3 << endl;
    cout << "v1 + v2 : " << v1 + v2 << endl;
    cout << "v1 * 3.141592 : " << v1 * 3.141592 << endl;
    cout << "v1.norm()  : " << v1.norm() << endl;
    cout << "v1 * v1  : " << v1 * v1 << endl;
    cout << "Dot(v1,v1)  : " << MyVector::Dot(v1,v1) << endl;
    cout << "Dot(v2,v3)  : " << MyVector::Dot(v2,v3) << endl;

    std::vector<MyVector> myvectors = {v2,v3,v1,v1};
    cout << "Before \n";
    for( const auto& myvector : myvectors){
        cout << myvector << endl;
    }    
    std::sort(myvectors.begin(),myvectors.end());
    
    cout << "After \n";
    for( const auto& myvector : myvectors){
        cout << myvector << endl;
    }

    return 0;
}
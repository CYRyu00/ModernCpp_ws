#include <iostream>
#include <string>
using std::cout;
using std::endl;

class Student {
 public:
    Student() {};
    ~Student() {};

    const std::string& name() const { return name_; } // const!!

 private:
    std::string name_="Anna";

};

void Print(const Student& student){
    cout << "Name : " << student.name() << endl;
}

int main(){
    Student student1;
    Print(student1);
    return 0;
}
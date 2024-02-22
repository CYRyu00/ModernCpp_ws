#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;

class Student {
 public:
    // Student() {};
    // ~Student() {};
    Student(double gpa, std::string name) : gpa_{gpa}, name_{name} {};
    
    const std::string& name() const { return name_; } // const!!
    const double& gpa() const { return gpa_; } // const!!

    bool operator<(const Student& other) const{
        return gpa_ < other.gpa_;
    }

    friend std::ostream& operator<<(std::ostream& os, const Student& student){
        os << "Name : " << student.name() << ", GPA :" << student.gpa();
        return os;
    }
    

 private:
    std::string name_="Anna";
    double gpa_ = 3.0;

};

int main(){
    std::vector<Student> students = {Student{},{4.2, "Bryan"}, Student{2.9,"Cho"}};
    std::sort(students.begin(), students.end());
    
    for (const auto& student : students) {
        cout << student << endl;
    }
    
    return 0;
}
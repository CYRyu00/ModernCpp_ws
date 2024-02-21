#include <iostream>
#include <map>//sorted order
#include <unordered_map> //more faster, in random order
#include <string>
using std::cout;
using std::endl;

int main(){
    //using StudentList = std::map<int, std::string>;
    using StudentList = std::unordered_map<int, std::string>;
    StudentList snu_students;
    
    //Map has order
    snu_students.emplace(1502,"April");
    snu_students.emplace(5279,"Bryan");
    snu_students.emplace(8895, "Cho");

    for (const auto& [id, name] : snu_students){
        cout << "ID : " << id << ", Name : " << name << endl;
    }

    cout << "ID 1502 is :" << snu_students[1502] << endl; 

    return 0;
}
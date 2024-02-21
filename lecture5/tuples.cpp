#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <iterator>
#include <map>
#include <string>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
using std::cout;
using std::endl;

int main(){

    std::tuple<double , char, std::string> student1;
    using Student = std::tuple<double , char, std::string> ;
    Student student2{1.0, 'A', "April"};
    cout << std::get<std::string>(student2) << endl;
    cout << std::get<double>(student2) << endl;

    auto [gpa, grade , name] = std::make_tuple(3.1,'B', "Bryan");
    cout << gpa << " " << grade << " " << name  << endl;

    return 0;
}
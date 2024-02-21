#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;

int main(){
    std::vector<int> nums = {1,2,3};
    std::vector<std::string> names = {"April", "Brain"};

    names.emplace_back("Cho");


    cout << "Last  name   is : " << names.back() << endl;
    cout << "First number is : " << nums.front() << endl;

    cout << "Size of 'nums' is       : " << nums.size() << endl;
    nums.clear();
    cout << "Size of Clear vector is : " << nums.size() << endl;
    return 0;
}
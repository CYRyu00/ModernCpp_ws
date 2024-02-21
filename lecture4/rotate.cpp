#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <iterator>
#include <map>
#include <string>
#include <list>
#include <algorithm>
using std::cout;
using std::endl;

void PrintVector(const std::vector<int>& s){
    for(int i=0; i < s.size(); i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

int main(){

    std::vector<int> v{0,1,2,3,4,5,6};
    cout << "Before :";
    PrintVector(v);

    std::rotate(v.begin(), v.begin() + 2 , v.end());
    cout << "After  :";
    PrintVector(v);
    
    return 0;
}
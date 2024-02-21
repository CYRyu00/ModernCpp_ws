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

void PrintArray(const std::array<int, 10>& s){
    for(int i=0; i < s.size(); i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

int main(){
    std::array<int ,10> s ={8, 3, 6, 1, 0, 7, 9, 5, 2, 4};
    cout << "Before : ";
    PrintArray(s);

    std::sort(s.begin(), s.end());
    cout << "After : ";
    PrintArray(s);
    return 0;
}
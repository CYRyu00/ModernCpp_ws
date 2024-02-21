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

inline bool div_by_3(int i){
    return i%3 == 0;
}

int main(){

    std::vector<int> v{1,2,3,4,5,6,7,8,9,12 };

    int n1 =std::count_if(v.begin(),v.end(),div_by_3);
    
    cout << "Divisible by 3 : " << n1 << endl;
    
    return 0;
}
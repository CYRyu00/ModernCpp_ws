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

inline bool Positive(int i){ return i >0;}
int main(){

    std::vector<int> v{1,2,3,4,5};
    bool all_pos = std::all_of(v.cbegin(),v.cend(), Positive);
    if (all_pos){
        cout << "All Positive " << endl;
    } else {
        cout << "Not All Positive " << endl;
    }

    return 0;
}
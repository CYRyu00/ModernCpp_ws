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

int main(){

    std::vector<int> v{0,1,2,3,4,5};

    auto print = [](const int& n) { cout << " " << n;};

    cout << "Numbers : ";
    std::for_each(v.cbegin(),v.cend(), print);
    cout << endl;
    

    return 0;
}
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

    std::vector<int> v{0,1,2,2,3,3,4,3,3};

    const int n1 = 2;
    const int n2 = 3;

    int num_items1 = std::count(v.begin(),v.end(),n1);
    int num_items2 = std::count(v.begin(),v.end(),n2);

    cout << n1 << " counts : " << num_items1 << endl;
    cout << n2 << " counts : " << num_items2 << endl;

    return 0;
}
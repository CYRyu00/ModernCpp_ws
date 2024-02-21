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

    std::vector<int> v{1,2,3,4,5,6};
    int sum = std::accumulate(v.begin(),v.end(),0);

    int product = std::accumulate(v.begin()
                                  ,v.end()
                                  ,1
                                  , std::multiplies<int>());

    cout << "Sum     : " << sum << endl;
    cout << "Product : " << product << endl;


    return 0;
}
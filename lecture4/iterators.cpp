#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <iterator>
#include <map>
#include <string>
#include <list>
using std::cout;
using std::endl;

int main(){
    
    std::vector<double> v{1,2,3};
    for (auto it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }


    std::map<int, std::string> m = {{1,"hi"},{2,"hello"}};
    std::map<int, std::string>::iterator m_it = m.find(1);
    cout << m_it -> first << ": " << m_it -> second << endl;

    return 0;
}
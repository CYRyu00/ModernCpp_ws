#include <string>
#include <iostream>

int main(){
    const std::string source{"Copy this!"};
    std::string dest = source;
    
    std::cout << source << '\n';
    std::cout << dest << '\n';
    return 0;
}
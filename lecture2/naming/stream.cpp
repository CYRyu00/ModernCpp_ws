#include <iostream>
int main(){
    int some_num;
    std::cout << "plz input any num\n";
    std::cin >> some_num;
    std::cout << "num = " << some_num << std::endl;
    std::cerr << "boring error msg\n";

    return 0; 
}
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;

int main(){
    int i;
    double num1, num2;
    std::string name;

    std::ifstream in("test.txt",std::ios_base::in);

    while(in >> i >> num1 >> name >> num2){
        cout << i << ", " << num1 << ", "
             << name << ", " << num2 << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main(){
    stringstream filename{"00203.txt111"};

    int num = 0;
    int num2 = 0;
    string ext;
    
    //Split the string stream using simple syntax
    filename >> num >> ext >> num2;

    cout << "Number    is:" << num << endl;
    cout << "Extension is:" << ext << endl;
    cout << "Num2      is:" << num2 << endl;
    return 0;
}
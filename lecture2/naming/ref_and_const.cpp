#include <iostream>
using namespace std;
int main(){

    int num = 42;
    int& ref = num;
    const auto& kRef = num;
    
    cout << ref << " " << num << " " << kRef << endl;
    
    ref = -1;
    cout << ref << " " << num << " " << kRef << endl;
    
    num = 50;
    cout << ref << " " << num << " " << kRef << endl;
    return 0; 
}
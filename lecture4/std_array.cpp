#include <iostream>
#include <array>
using std::cout;
using std::endl;

int main(){
    std::array<float, 3> data{10.0F, 200.0F, 3000.0F};

    for (const auto& element : data){
        cout << element << endl;
    }

    cout << std::boolalpha; //change 0,1 to false, true
    cout << "Array Empty: " << data.empty() << endl;
    cout << "Array Size: " << data.size() << endl;
    
    return 0;

}
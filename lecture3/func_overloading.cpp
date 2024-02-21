#include <iostream>
#include <string>
using namespace std;

string TypeOf(int){
    return "int";
}
string TypeOf(const string&){
    return "string";
}

int main(){
    cout << TypeOf(1) << endl;
    cout << TypeOf("hi") <<endl;
    return 0;
} 
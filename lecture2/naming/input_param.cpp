#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[]){
    //argc defines numbers of input parameters
    cout << "Got " << argc << "params\n";

    // argv is an array of string parameters
    cout << "Program: " << argv[0] << endl;

    for(int i=1; i< argc; i++){
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }

    return 0;
}
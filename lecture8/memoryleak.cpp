#include <iostream>
#include <cmath>
using std::cout; using std::endl;
int main(){
    double *data =nullptr;
    size_t size = pow(1024,3) / 8; // produce 1GB
    for (int i=0; i < 2 ;i++){
        data = new double[size];
        std::fill(data, data+size, 1.23);

        cout << "Iteration : " << i << " done." 
             << (i+1) << "GB has been allocated" << endl;
    }

    delete[] data; // delete ONLY ONE memory
    int unused;
    std::cin >> unused;

    return 0;
}
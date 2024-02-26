#include <iostream>
using std::cout; using std::endl;
int main(){
    int a = 42;
    int* a_ptr = &a;
    int** a_ptr_ptr = &a_ptr;

    cout << a << " " << a_ptr << " " << a_ptr_ptr << endl;
    cout << a << " " << *a_ptr << " " << *a_ptr_ptr << endl;
    return 0;
}
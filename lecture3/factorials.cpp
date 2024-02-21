#include <iostream>
using namespace std;

inline int Factorial(int n = 1){
    if(n<2) return 1;
    return n*Factorial(n-1);
}

void PrintFactorials(int n){
    for(int i=1; i<=n;i++){
        cout <<  "Factorial " << i << " is :" << Factorial(i) << endl;    
    }
}

int main(){
    int num = 5;
    PrintFactorials(num);
    return 0;
}
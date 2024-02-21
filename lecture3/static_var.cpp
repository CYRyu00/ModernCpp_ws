#include <iostream>
using namespace std;

void Counter(){
    static int cnt = 0;
    cout << "counter state = " << ++cnt << endl;
}

int main() {
    for(size_t i=0;i<5;i++){
        Counter();
    }
    return 0;
}
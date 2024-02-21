#include <iostream>
#include <string>
using std::cout;
using std::endl;
namespace fun{
    std::string MeaningOfLife(void) {
        return "love";
    }
}

namespace boring{
    std::string MeaningOfLife(void){
        return "money";
    }
}

int main(){
    cout << "What's the meaning of life?\n";
    cout << fun::MeaningOfLife() << endl;
    cout << boring::MeaningOfLife() << endl;
    return 0;
}
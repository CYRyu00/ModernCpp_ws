#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;

int main(){
    std::string filename = "out.txt";
    std::ofstream outfile(filename);

    if(!outfile.is_open()){ return EXIT_FAILURE; }
    double a =1.123121313;

    outfile << "It is just a string" << endl;
    outfile << a << endl;

    //Read and copy to out.txt
    int i;
    double num1, num2;
    std::string name;

    std::ifstream in("test.txt",std::ios_base::in);
    
    outfile << "This is a Copy" << endl;
    while(in >> i >> num1 >> name >> num2){
        outfile << i << ", " << num1 << ", "
             << name << ", " << num2 << endl;
    }

    return 0;
}

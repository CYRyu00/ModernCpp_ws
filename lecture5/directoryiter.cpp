#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
using std::cout;
using std::endl;
namespace fs = std::filesystem;

void demo_exists(const fs::path& p){
    cout << p;
    if(fs::exists(p)) cout << " exists\n";
    else cout << " does not exists\n";
}
int main(){
    fs::create_directories("sandbox/a/b");
    std::ofstream("sandbox/file1.txt");
    std::ofstream("sandbox/file2.txt");
    
    demo_exists("sandbox/a/b");
    demo_exists("sandbox/file2.txt");
    demo_exists("sandbox/file3.txt");

    for (auto& p : fs::directory_iterator("sandbox")){
        cout << p.path() << endl;
    }
    //fs::remove_all("sandbox");
    return 0;
}

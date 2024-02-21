#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main(){
    cout << fs::path("/foo/bar.txt").filename() << endl
         << fs::path("/foo/.bar").filename() << endl
         << fs::path("/foo/bar/").filename() << endl
         << fs::path("/foo/.").filename() << endl
         << fs::path("/foo/..").filename() << endl;

    cout << fs::path("/foo/bar.txt").stem() << endl
         << fs::path("/foo/02215.jpg").stem() << endl
         << fs::path("/foo/.bar").stem() << endl;

    return 0;
}

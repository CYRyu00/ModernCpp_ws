#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout; using std::endl;

class Singleton{
 private:
    Singleton() = default;
    ~Singleton() = default;

 public:
    Singleton(const Singleton& ) = delete;
    void operator=(const Singleton& ) =delete;
    Singleton(const Singleton&& ) = delete;
    void operator=(const Singleton&& ) =delete;
    
    static Singleton& GetInstance(){
        static Singleton instance;
        return instance;
    }

 private:
    int foo_ = 0 ;

 public:
    int foo() const {return foo_;};
    void set_foo(int foo) { foo_=foo; };   

};

int main(){
    auto& singleton = Singleton::GetInstance();
    cout<< singleton.foo() << endl;
    singleton.set_foo(50);
    cout<< singleton.foo() << endl;


   // Compile Error!!
   //  Singleton s1;
   //  Singleton s2(singleton);
   //  Singleton s3 = singleton;

    return 0;
}
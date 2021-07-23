#include<iostream>
using std::cout;

namespace TestNamespace{
    void sayHello(){
        std::cout << "Hello from TestNamespace::sayHello()!" << std::endl;
    }
}


int main(){
    cout<<"hello world" << std::endl;
    TestNamespace::sayHello();
    return 0;
}


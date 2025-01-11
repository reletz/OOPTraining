#include "helloworld.hpp"
#include <iostream>

using namespace std;

hello::hello(){
    cout << "Hello, World!" << endl;
}

int main(){
    hello h;
    return 0;
}
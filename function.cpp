// contains a single function
#include <iostream>

using namespace std;

bool sayHello(bool sayIt) {
    if(sayIt) {
        std::cout << "Hello" << std::endl;
    }
    return sayIt;
}

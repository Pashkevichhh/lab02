#include <iostream>
#include <string>

int main() {
     std::string name; // Creating conflict
     std::cin >> name; // Comment to prove merge can still be done
     std::cout << "Hello world from " << name << std::endl;
     return 0;
}

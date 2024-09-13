// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string username;
    std::cout << "What is your name? " << std::flush;
    std::cin >> username;
    std::cout << "Hello, " << username;

    std::cout << std::endl << std::endl;
    return (0);
}

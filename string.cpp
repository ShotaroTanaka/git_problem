#include <iostream>
#include <string>

int main(){
    std::string string1, string2;

    std::cout << "string1=";
    std::cin >> string1; 
    std::cout << "string2="; 
    std::cin >> string2;

    std::cout << "string1+string2=" << string1+string2 << std::endl;
    
    return 0;

}
#include <iostream>
#include <string>

int main(){
    std::string str1, str2, str3;

    std::cout << "string1=";
    std::cin >> str1; 
    std::cout << "string2="; 
    std::cin >> str2;

    str3= str1 + str2;

    std::cout << "string1+string2=" << str3 << std::endl;
    
    return 0;

}
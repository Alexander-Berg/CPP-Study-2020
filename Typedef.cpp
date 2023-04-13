#include <iostream>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Berg";
    number_t age = 29;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
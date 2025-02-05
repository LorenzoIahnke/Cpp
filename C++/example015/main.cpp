#include <iostream>
#include "coffee.hpp"

int main()
{
    std::cout << makecoffee();
    std::cout << makecoffee(true);
    std::cout << makecoffee(true, true);
    std::cout << makecoffee(false, true);
}
#include "Drink.hpp"
#include <iostream>

void Drink::printDrink() const {
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Price: " << m_price << std::endl;
}
#include "DrinkMenu.hpp"
#include <iostream>

void DrinkMenu::addDrink() {
    std::string name;
    std::cout << "Enter drink's name\n";
    std::cin >> name;
    size_t price;
    std::cout << "Enter the price of the drink\n";
    std::cin >> price;
    m_menu.push_back(Drink {name, price });
}

void DrinkMenu::removeDrink() {
    std::string input;
    int i = 0;
    int menu_size = m_menu.size();
    do {
        std::cout << "Enter yes, if you wish to remove the currently displayed drink\n";
        m_menu[i].printDrink();
        std::cin >> input;
        ++i;
    } while (input != "yes" && i < menu_size);
    if (input == "yes")
        m_menu.erase(m_menu.begin() + --i);
}

void DrinkMenu::printAllDrinks() const {
    for (int i = 0; i < m_menu.size(); ++i) {
        m_menu[i].printDrink();
    }
}
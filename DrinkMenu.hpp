#ifndef DRINKMENU_HPP
#define DRINKMENU_HPP

#include "Drink.hpp"
#include <vector>

class DrinkMenu {
    public:
        void addDrink();
        void removeDrink();
        void printAllDrinks() const;
    private:
        std::vector<Drink> m_menu;
};

#endif /* DRINKMENU_HPP */
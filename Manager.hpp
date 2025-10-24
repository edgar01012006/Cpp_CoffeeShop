#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "DrinkMenu.hpp"
#include "Barista.hpp"

class Manager {
    public:
        void constructMenu();
        void addBarista();
        void removeBarista();
    private:
        size_t m_Income;    
        DrinkMenu m_menu;
        Barista* m_barista;
};

#endif /* MANAGER_HPP */
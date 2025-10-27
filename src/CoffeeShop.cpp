#include <iostream>
#include "include/CoffeeShop.hpp"

CoffeeShop::CoffeeShop(const std::string& name) 
    : m_shopName { name }, m_menu {}, m_baristas {}, m_queue {} {}

std::string CoffeeShop::getName() const { return m_shopName; }
void CoffeeShop::setName(const std::string& newName) { m_shopName = newName; }

void CoffeeShop::addDrink(Drink* drink) {
    int menu_size = m_menu.size();
    for (int i = 0; i < menu_size; ++i) {
        if (m_menu[i] == drink) {
            std::cout << "Drink already exists in the menu\n";
            return;
        }
    }
    m_menu.push_back(drink);
    std::cout << "Successfully added new drink to the menu\n";
}

void CoffeeShop::removeDrink(const std::string& drinkName) {
    int menu_size = m_menu.size();
    for (int i = 0; i < menu_size; ++i) {
        if (m_menu[i]->getName() == drinkName) {
            m_menu.erase(m_menu.begin() + i);
            std::cout << "Successfuly removed " << drinkName << "\n";
            return;
        }
    }
    std::cout << drinkName << " doesn't exist in the menu\n";
}

void CoffeeShop::showMenu() const {
    std::cout << "\nShowing all Menu items\n";
    int menu_size = m_menu.size();
    for (int i = 0; i < menu_size; ++i) {
        m_menu[i]->display();
    }
}

void CoffeeShop::hireBarista(Barista* barista) {
    int baristas_size = m_baristas.size();
    for (int i = 0; i < baristas_size; ++i) {
        if (m_baristas[i] == barista) {
            std::cout << "Barista already works here\n";
            return;
        }
    }
    m_baristas.push_back(barista);
    std::cout << "Barista successfully added\n";
}

void CoffeeShop::fireBarista(Barista* barista) {
    int baristas_size = m_baristas.size();
    for (int i = 0; i < baristas_size; ++i) {
        if (m_baristas[i] == barista) {
            m_baristas.erase(m_baristas.begin() + i);
            std::cout << "Barista successfully removed\n";
            return;
        }
    }
    std::cout << "This Barista doesn't work here\n";
}

void CoffeeShop::showBaristas() const {
    std::cout << "\nShowing all baristas\n";
    int baristas_size = m_baristas.size();
    for (int i = 0; i < baristas_size; ++i) {
        std::cout << m_baristas[i]->getName() << "\n";
    }
}

void CoffeeShop::addCustomerToQueue(Customer* customer) {
    m_queue.push_back(customer);
}

void CoffeeShop::serveNextCustomer() {
    m_queue.erase(m_queue.begin());
}

void CoffeeShop::showQueue() const {
    std::cout << "\nShowing queue\n";
    int queue_size = m_queue.size();
    for (int i = 0; i < queue_size; ++i) {
        std::cout << i << ": " << m_queue[i]->getName() << '\n';
    }
}

std::vector<Customer*> CoffeeShop::getQueue() const { return m_queue; }

void CoffeeShop::displayShopInfo() const {
    std::cout << "\nDisplaying Shop Info\n";
    std::cout << "Shop Name: " << m_shopName << std::endl;
    showMenu();
    showBaristas();
    showQueue();
}
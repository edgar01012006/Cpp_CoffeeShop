#ifndef COFFEE_SHOP
#define COFFEE_SHOP

#include <vector>
#include <string>
#include "Drink.hpp"
#include "Barista.hpp"
#include "Customer.hpp"

class CoffeeShop {

    private:
        std::string m_shopName;
        std::vector<Drink*> m_menu;
        std::vector<Barista*> m_baristas; // Aggregation
        std::vector<Customer*> m_queue;   // Association

        void constructMenu();

    public:
        CoffeeShop() = default;
        CoffeeShop(const std::string& name);

        std::string getName() const;
        void setName(const std::string& newName);

        void addDrink(Drink* drink);
        void removeDrink(const std::string& drinkName);
        void showMenu() const;

        void hireBarista(Barista* barista);
        void fireBarista(Barista* barista);
        void showBaristas() const;

        void addCustomerToQueue(Customer* customer);
        void serveNextCustomer();
        void showQueue() const;

        void displayShopInfo() const;
};

#endif /* COFFEE_SHOP */
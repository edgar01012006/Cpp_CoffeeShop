#include <iostream>
#include "include/CoffeeShop.hpp"
#include "include/Barista.hpp"
#include "include/Customer.hpp"
#include "include/Order.hpp"
#include "include/Drink.hpp"

int main() {
    std::cout << "=== Coffee Shop Simulation ===\n";

    // 1. Create CoffeeShop
    CoffeeShop myShop("Brew Haven");
    std::cout << "Coffee Shop created: " << myShop.getName() << "\n";

    // 2. Create and add Drinks to the Menu (since constructMenu() is gone)
    Drink espresso("Espresso", Drink::Size::Small, 200);
    Drink cappuccino("Cappuccino", Drink::Size::Medium, 350);
    Drink latte("Latte", Drink::Size::Big, 450);

    myShop.addDrink(&espresso);
    myShop.addDrink(&cappuccino);
    myShop.addDrink(&latte);

    myShop.showMenu();

    // 3. Hire Baristas
    Barista barista1("Alice");
    Barista barista2("Bob");

    myShop.hireBarista(&barista1);
    myShop.hireBarista(&barista2);
    myShop.showBaristas();

    // 4. Add Customers to Queue
    Customer customer1("John", 1000);
    Customer customer2("Emma", 600);

    myShop.addCustomerToQueue(&customer1);
    myShop.addCustomerToQueue(&customer2);
    myShop.showQueue();

    // 5. Customer places an Order
    Order order1(101);
    order1.addDrink(cappuccino);
    order1.addDrink(latte);
    customer1.placeOrder(&order1);

    std::cout << "\nJohn's order details:";
    customer1.viewOrder();

    // 6. Barista prepares the Order
    barista1.greetCustomer();
    barista1.prepareOrder(&order1);

    std::cout << "\nAfter preparation:";
    order1.displayOrder();

    // 7. Customer pays
    std::cout << "\nJohn attempts to pay...\n";
    customer1.payOrder();
    customer1.display();

    // 8. Serve next customer in queue
    std::cout << "\nNow serving next customer...\n";
    myShop.serveNextCustomer();
    myShop.showQueue();

    std::cout << "\n=== End of Simulation ===\n";
    return 0;
}
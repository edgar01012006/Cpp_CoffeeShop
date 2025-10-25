#ifndef COFFEE_HPP
#define COFFEE_HPP

#include <string>
#include "Order.hpp"

class Customer {
    private:
        std::string m_name;
        double m_balance;
        Order* m_currentOrder;
        
    public:
        Customer() = default;
        Customer(const std::string& name, double balance);

        std::string getName() const;
        double getBalance() const;
        void setBalance(double newBalance);

        void placeOrder(Order* order);
        void payOrder();
        void viewOrder() const;

        void display() const;
};

#endif /* COFFEE_HPP */
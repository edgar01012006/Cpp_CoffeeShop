#include <iostream>
#include "include/Customer.hpp"

Customer::Customer(const std::string& name, double balance) 
    : m_name { name }, m_balance { balance }, m_currentOrder {} {}

std::string Customer::getName() const { return m_name; }
double Customer::getBalance() const { return m_balance; }
void Customer::setBalance(double newBalance) { m_balance = newBalance; }

void Customer::placeOrder(Order* order) { m_currentOrder = order; }

void Customer::payOrder() {
    double orderTotalPrice = m_currentOrder->getTotalPrice();
    if (m_balance > orderTotalPrice) {
        m_balance -= orderTotalPrice;
        m_currentOrder->markPaid();
    }
    else {
        std::cout << "Not Enough balance to pay for the order\n";
    }
}

void Customer::viewOrder() const { m_currentOrder->displayOrder(); };

void Customer::display() const {
    std::cout << "\nCustomer Info Display\n";
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Balance: " << m_balance << std::endl;
};
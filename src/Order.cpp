#include <iostream>
#include "include/Order.hpp"

Order::Order(int id) 
    : m_orderId { id }, m_totalPrice { 0 }, m_isPrepared { false }, m_isPaid { false } {}

int Order::getOrderId() const { return m_orderId; }
double Order::getTotalPrice() const { return m_totalPrice; }
bool Order::getIsPrepared() const { return m_isPrepared; }
bool Order::getIsPaid() const { return m_isPaid; }

void Order::addDrink(const Drink& drink) {
    m_drinks.push_back(drink);
    m_totalPrice += drink.getPrice();
}

void Order::removeDrink(int index) {
    m_drinks.erase(m_drinks.begin() + index);
    m_totalPrice -= m_drinks[index].getPrice();
}

void Order::calculateTotalPrice() { // currently useless 
    m_totalPrice = 0;
    for (int i = 0; i < m_drinks.size(); ++i) {
        m_totalPrice += m_drinks[i].getPrice();
    }
}

void Order::markPrepared() { m_isPrepared = true; }
void Order::markPaid() { m_isPaid = true; }

void Order::displayOrder() const {
    std::cout << "\nOrder Info Display\n";
    std::cout << "Order id: " << m_orderId << std::endl;
    for (int i = 0; i < m_drinks.size(); ++i) {
        m_drinks[i].display();
    }
    std::cout << "TotalPrice: " << m_totalPrice << std::endl;
    std::cout << "IsPrepared: " << m_isPrepared << std::endl;
    std::cout << "IsPaid: " << m_isPaid << std::endl;
}
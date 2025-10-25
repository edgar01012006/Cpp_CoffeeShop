#include <iostream>
#include "include/Barista.hpp"

Barista::Barista(const std::string& name) 
    : m_name { name } {}

std::string Barista::getName() const { return m_name; }
void Barista::setName(const std::string& newName) { m_name = newName; }

void Barista::prepareOrder(Order* order) {
    std::cout << getName() << " is Preparing your Order\n";
    order->markPrepared();
    std::cout << "Your order is Prepared\n";
}

void Barista::greetCustomer() const {
    std::cout << "Hello Customer\n";
}
#include <iostream>
#include "include/Drink.hpp"

std::string Drink::volumeToString(Drink::Size volume) const {
    switch (volume) {
        case Drink::Size::Small: return "Small";
        case Drink::Size::Medium: return "Medium";
        case Drink::Size::Big: return "Big";
        default: break;
    }
    return "None";
}

Drink::Drink(const std::string& name, Size volume, double price)
    : m_name { name }, m_volume { volume }, m_price { price } {}

std::string Drink::getName() const { return m_name; }
Drink::Size Drink::getVolume() const { return m_volume; }
double Drink::getPrice() const { return m_price; }

void Drink::setName(const std::string& newName) { m_name = newName; }
void Drink::setVolume(Size newVolume) { m_volume = newVolume; }
void Drink::setPrice(double newPrice) { m_price = newPrice; }

void Drink::display() const {
    std::cout << "\nDrink Info Display\n";
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Volume: " << volumeToString(m_volume) << std::endl;
    std::cout << "Price: " << m_price << std::endl;
}
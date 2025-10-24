#ifndef DRINK_H
#define DRINK_H

#include <string>

class Drink {
    public:
        Drink(const std::string& name, size_t price) : m_name { name }, m_price { price } {}
        void printDrink() const;
    private:
        std::string m_name;
        size_t m_price;
};

#endif /* DRINK_H */
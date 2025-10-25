#ifndef BARISTA_HPP
#define BARISTA_HPP

#include <string>
#include "Order.hpp"

class Barista {
    private:
        std::string m_name;
        
    public:
        Barista() = default;
        Barista(const std::string& name);

        std::string getName() const;
        void setName(const std::string& newName);

        void prepareOrder(Order* order); // dependency
        void greetCustomer() const;
};

#endif /* BARISTA_HPP */
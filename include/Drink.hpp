#ifndef DRINK_HPP
#define DRINK_HPP

#include <string>

class Drink {
    public:
        enum class Size { Small, Medium, Big };

    private:
        std::string m_name;
        Size m_volume;
        double m_price;
        
        std::string volumeToString(Size volume) const;

    public:
        Drink() = default;
        Drink(const std::string& name, Size volume, double price);

        std::string getName() const;
        Size getVolume() const;
        double getPrice() const;

        void setName(const std::string& newName);
        void setVolume(Size newVolume);
        void setPrice(double newPrice);

        void display() const;
};

#endif /* DRINK_HPP */
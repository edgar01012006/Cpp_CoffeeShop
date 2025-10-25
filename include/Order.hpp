#ifndef ORDER_HPP
#define ORDER_HPP

#include <vector>
#include "Drink.hpp"

class Order {
    private:
        int m_orderId;
        std::vector<Drink> m_drinks;
        double m_totalPrice;
        bool m_isPrepared;
        bool m_isPaid;

    public:
        Order();
        Order(int id);

        int getOrderId() const;
        double getTotalPrice() const;
        bool getIsPrepared() const;
        bool getIsPaid() const;

        void addDrink(const Drink& drink);
        void removeDrink(int index);
        void calculateTotalPrice();

        void markPrepared();
        void markPaid();

        void displayOrder() const;
};

#endif /* ORDER_HPP */
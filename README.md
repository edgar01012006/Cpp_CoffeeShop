# ☕ Coffee Shop System — Object-Oriented Design Practice

A C++ project modeling a `CoffeeShop` system with classes like `Barista`, `Order`, `Drink`, and `Customer`.  
This assignment demonstrates **association**, **aggregation**, **composition**, and **object linking** in modern C++.

---

## 📂 Project Structure

├── main.cpp              # Main (written by ChatGPT)  
├── include/              # Header files (class declarations)  
│   ├── Barista.hpp  
│   ├── Order.hpp  
│   ├── Drink.hpp  
│   ├── Customer.hpp  
│   └── CoffeeShop.hpp  
├── src/                  # Source files (implementations)  
│   ├── Barista.cpp  
│   ├── Order.cpp  
│   ├── Drink.cpp  
│   ├── Customer.cpp  
│   └── CoffeeShop.cpp  
└── README.md

---

## ⚙️ Build & Run

Compile and execute with **g++ (C++11)**:

```bash
g++ -std=c++11 -I. main.cpp src/Barista.cpp src/CoffeeShop.cpp src/Customer.cpp src/Drink.cpp src/Order.cpp -o coffee_shop
./coffee_shop
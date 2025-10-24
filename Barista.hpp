#ifndef BARISTA_HPP
#define BARISTA_HPP

#include <string>

class Barista {
    public:
        Barista(std::string name) : m_name { name } {}
    private:
        std::string m_name;
};

#endif /* BARISTA_HPP */
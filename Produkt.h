#ifndef PRODUKT_H
#define PRODUKT_H

#include <iostream>

class Produkt {
private:
    std::string nazwa;
    double ilosc;
    std::string producent;
    std::string numerPartii;
    std::string dataPrzydatnosci;

public:
    Produkt(std::string nazwa, double ilosc, std::string producent, std::string numerPartii, std::string dataPrzydatnosci);

    std::string getNazwa() const;
    double getIlosc() const;
    std::string getProducent() const;
    std::string getNumerPartii() const;
    std::string getDataPrzydatnosci() const;

    void drukujInformacje() const;
};

#endif
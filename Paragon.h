#ifndef PARAGON_H
#define PARAGON_H

#include <string>
#include <vector>
#include <iostream>
#include "Produkt.h"

class Paragon {
private:
    std::string nazwaSklepu;
    std::string data;
    std::vector<Produkt> produkty;

public:
    Paragon(std::string nazwaSklepu, std::string data);

    void dodajProdukt(const Produkt& produkt);
    void drukujParagon() const;
    int liczbaProduktow() const;

    std::string getNazwaSklepu() const;
    std::string getData() const;
    const Produkt& getProdukt(int index) const;
};

#endif
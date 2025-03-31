#include "Produkt.h"
#include <iostream>

Produkt::Produkt(std::string nazwa, double ilosc, std::string producent, std::string numerPartii, std::string dataPrzydatnosci)
    : nazwa(nazwa), ilosc(ilosc), producent(producent), numerPartii(numerPartii), dataPrzydatnosci(dataPrzydatnosci) {
}

std::string Produkt::getNazwa() const {
    return nazwa;
}

double Produkt::getIlosc() const {
    return ilosc;
}

std::string Produkt::getProducent() const {
    return producent;
}

std::string Produkt::getNumerPartii() const {
    return numerPartii;
}

std::string Produkt::getDataPrzydatnosci() const {
    return dataPrzydatnosci;
}

void Produkt::drukujInformacje() const {
    std::cout << "Produkt: " << nazwa << ", Iloœæ: " << ilosc
        << ", Producent: " << producent << ", Numer partii: " << numerPartii
        << ", Data przydatnoœci: " << dataPrzydatnosci << std::endl;
}
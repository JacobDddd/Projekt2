#include "Paragon.h"

Paragon::Paragon(std::string nazwaSklepu, std::string data)
    : nazwaSklepu(nazwaSklepu), data(data) {
}

void Paragon::dodajProdukt(const Produkt& produkt) {
    produkty.push_back(produkt);
}

void Paragon::drukujParagon() const {
    std::cout << "Sklep: " << nazwaSklepu << ", Data: " << data << std::endl;
    for (const auto& produkt : produkty) {
        produkt.drukujInformacje();
    }
}

int Paragon::liczbaProduktow() const {
    return produkty.size();
}

std::string Paragon::getNazwaSklepu() const {
    return nazwaSklepu;
}

std::string Paragon::getData() const {
    return data;
}

const Produkt& Paragon::getProdukt(int index) const {
    return produkty[index];
}
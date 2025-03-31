#include "PlikHandler.h"

bool PlikHandler::zapiszParagonDoPliku(const Paragon& paragon, const std::string& nazwaPliku) {
    std::ofstream plik(nazwaPliku);
    if (!plik.is_open()) {
        return false;
    }

    plik << paragon.getNazwaSklepu() << std::endl;
    plik << paragon.getData() << std::endl;

    for (int i = 0; i < paragon.liczbaProduktow(); ++i) {
        const Produkt& produkt = paragon.getProdukt(i);
        plik << produkt.getNazwa() << ","
            << produkt.getIlosc() << ","
            << produkt.getProducent() << ","
            << produkt.getNumerPartii() << ","
            << produkt.getDataPrzydatnosci() << std::endl;
    }

    plik.close();
    return true;
}

bool PlikHandler::wczytajParagonZPliku(const std::string& nazwaPliku, Paragon& paragon) {
    std::ifstream plik(nazwaPliku);
    if (!plik.is_open()) {
        return false;
    }

    std::string nazwaSklepu;
    std::string data;
    std::getline(plik, nazwaSklepu);
    std::getline(plik, data);

    paragon = Paragon(nazwaSklepu, data);

    std::string linia;
    while (std::getline(plik, linia)) {
        std::stringstream ss(linia);
        std::string nazwa, producent, numerPartii, dataPrzydatnosci;
        double ilosc;

        std::getline(ss, nazwa, ',');
        ss >> ilosc;
        ss.ignore(1);
        std::getline(ss, producent, ',');
        std::getline(ss, numerPartii, ',');
        std::getline(ss, dataPrzydatnosci);

        Produkt produkt(nazwa, ilosc, producent, numerPartii, dataPrzydatnosci);
        paragon.dodajProdukt(produkt);
    }

    plik.close();
    return true;
}
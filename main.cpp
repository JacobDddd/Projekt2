#include <iostream>
#include <vector>
#include "Produkt.h"
#include "Paragon.h"
#include "PlikHandler.h"

int main() {
    Produkt prod1("Mleko", 2.0, "MarkaA", "1234", "2025-05-01");
    Produkt prod2("Chleb", 1.5, "MarkaB", "5678", "2025-04-01");

    Paragon paragon("Sklep XYZ", "2025-03-29");
    paragon.dodajProdukt(prod1); 
    paragon.dodajProdukt(prod2);

    paragon.drukujParagon();

    PlikHandler::zapiszParagonDoPliku(paragon, "paragon.txt");

    Paragon nowyParagon("", "");
    PlikHandler::wczytajParagonZPliku("paragon.txt", nowyParagon);

    nowyParagon.drukujParagon();

    return 0;
}

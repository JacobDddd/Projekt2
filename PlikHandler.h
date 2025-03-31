#ifndef PLIKHANDLER_H
#define PLIKHANDLER_H

#include <fstream>
#include <sstream>
#include "Produkt.h"
#include "Paragon.h"

class PlikHandler {
public:
    static bool zapiszParagonDoPliku(const Paragon& paragon, const std::string& nazwaPliku);
    static bool wczytajParagonZPliku(const std::string& nazwaPliku, Paragon& paragon);
};

#endif
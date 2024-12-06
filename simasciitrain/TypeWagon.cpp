//
// Created by arthu on 06/12/2024.
//

#include "TypeWagon.h"

using namespace simasciitrain;

const TypeWagon TypeWagon::PASSENGER = TypeWagon("Passager", '0');
const TypeWagon TypeWagon::UTILITY = TypeWagon("Utilitaire", '@');
const TypeWagon TypeWagon::FREIGHT = TypeWagon("Marchandise", '#');

std::string TypeWagon::getName() const {
    return _name;
}

char TypeWagon::getSymbol() const {
    return _symbol;
}

TypeWagon::TypeWagon(std::string name, char symbol) {
    this->_name = std::move(name);
    this->_symbol = symbol;
}

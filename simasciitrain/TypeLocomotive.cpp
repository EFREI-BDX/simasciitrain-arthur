//
// Created by arthu on 06/12/2024.
//

#include "TypeLocomotive.h"

using namespace simasciitrain;

const TypeLocomotive TypeLocomotive::ELECTRIC = TypeLocomotive("Electrique", 'E');
const TypeLocomotive TypeLocomotive::GASOLINE = TypeLocomotive("Essence", 'G');

std::string TypeLocomotive::getName() const {
    return _name;
}

char TypeLocomotive::getSymbol() const {
    return _symbol;
}

TypeLocomotive::TypeLocomotive(std::string name, char symbol) {
    this->_name = std::move(name);
    this->_symbol = symbol;
}
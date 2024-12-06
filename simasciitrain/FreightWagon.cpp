//
// Created by arthu on 06/12/2024.
//

#include "FreightWagon.h"
#include <iostream>

using namespace simasciitrain;

FreightWagon::FreightWagon(int count)
    : AbstractWagon(&TypeWagon::FREIGHT)
{
    this->_freightCount = count;
}

FreightWagon::~FreightWagon() {
}

int FreightWagon::getFreightCount() {
    return this->_freightCount;
}

void FreightWagon::setFreightCount(int freightCount) {
    this->_freightCount = freightCount;
}

void FreightWagon::print(std::ostream &os) const {
    os << "[";
    for (int i = 0; i < this->_freightCount; i++) {
        os <<this->getSymbol();
    }
    os << "]";
}

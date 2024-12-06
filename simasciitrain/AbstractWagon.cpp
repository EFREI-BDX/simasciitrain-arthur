#include "AbstractWagon.h"

using namespace simasciitrain;

AbstractWagon::AbstractWagon(const TypeWagon* typeWagon)
    : _typeWagon(typeWagon) {
}

char AbstractWagon::getSymbol() const {
    return _typeWagon->getSymbol();
}

std::string AbstractWagon::getType() const {
    return _typeWagon->getName();
}

void AbstractWagon::print(std::ostream& os) const {
    os << "[" << getSymbol() << "]";
}

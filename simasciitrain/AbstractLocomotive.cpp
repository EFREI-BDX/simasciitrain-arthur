#include "AbstractLocomotive.h"

using namespace simasciitrain;

AbstractLocomotive::AbstractLocomotive(const TypeLocomotive* typeLocomotive)
    : _typeLocomotive(typeLocomotive) {
}

AbstractLocomotive::~AbstractLocomotive() = default;

char AbstractLocomotive::getSymbol() const {
    return _typeLocomotive->getSymbol();
}

std::string AbstractLocomotive::getType() const {
    return _typeLocomotive->getName();
}

void AbstractLocomotive::print(std::ostream& os) const {
    os << "[" << getSymbol() << "]>";
}

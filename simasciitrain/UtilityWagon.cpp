#include "UtilityWagon.h"
#include "TypeWagon.h"
#include <ostream>

namespace simasciitrain {

    UtilityWagon::UtilityWagon()
        : AbstractWagon(&TypeWagon::UTILITY) {
    }

    UtilityWagon::~UtilityWagon() = default;

    void UtilityWagon::print(std::ostream &os) const {
        os << "[" << getSymbol() << "]";
    }

}
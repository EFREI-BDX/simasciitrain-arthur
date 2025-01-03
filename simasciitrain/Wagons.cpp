#include "Wagons.h"

namespace simasciitrain {

    Wagons::Wagons() : _wagons() {
    }

    Wagons::~Wagons() {
        for (auto wagon : _wagons) {
            delete wagon;
        }
    }

    Wagons* Wagons::addWagon(AbstractWagon* wagon) {
        _wagons.push_back(wagon);
        return this;
    }

    std::ostream& operator<<(std::ostream& os, const Wagons& wagons) {
        for (AbstractWagon* wagon : wagons._wagons) {
            os << *wagon;
            if(wagon != wagons._wagons.back()) {
                os << "-";
            }
        }
        return os;
    }

} // namespace simasciitrain
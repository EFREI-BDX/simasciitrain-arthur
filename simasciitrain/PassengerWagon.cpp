#include "PassengerWagon.h"
#include "TypeWagon.h"
#include <ostream>

namespace simasciitrain {

    PassengerWagon::PassengerWagon(int passengerCount)
        : AbstractWagon(&TypeWagon::PASSENGER), _passengerCount_(passengerCount) {
    }

    PassengerWagon::~PassengerWagon() = default;

    int PassengerWagon::getPassengerCount() const {
        return _passengerCount_;
    }

    void PassengerWagon::setPassengerCount(int passengerCount) {
        _passengerCount_ = passengerCount;
    }

    void PassengerWagon::print(std::ostream &os) const {
        os << "[";
        for (int i = 0; i < _passengerCount_; i++) {
            os << getSymbol();
        }
        os << "]";
    }

}
#include "Train.h"

namespace simasciitrain {

    Train::Train(Wagons* wagons, AbstractLocomotive* locomotive)
        : _wagons(wagons), _locomotive(locomotive) {
    }

    Train::~Train() {
        delete _wagons;
        delete _locomotive;
    }

    void Train::print(std::ostream& os) const {
        os << *_wagons << "-" << *_locomotive;
    }

}

#ifndef WAGONS_H
#define WAGONS_H

#include <vector>
#include "AbstractWagon.h"

namespace simasciitrain {

    class Wagons {
    private:
        std::pmr::vector<AbstractWagon*> _wagons;

    public:
        Wagons();
        ~Wagons();
        Wagons* addWagon(AbstractWagon* wagon);

        friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons);
    };

} // namespace simasciitrain

#endif //WAGONS_H

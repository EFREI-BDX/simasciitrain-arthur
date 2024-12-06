#ifndef UTILITYWAGON_H
#define UTILITYWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {
    class UtilityWagon : public AbstractWagon {
    public:
        explicit UtilityWagon();
        ~UtilityWagon();

        void print(std::ostream &os) const override;
    };

}

#endif // UTILITYWAGON_H

#ifndef GASOLINELOCOMOTIVE_H
#define GASOLINELOCOMOTIVE_H

#include "AbstractLocomotive.h"

namespace simasciitrain {

    class GasolineLocomotive : public AbstractLocomotive {
    public:
        GasolineLocomotive();
        ~GasolineLocomotive() override = default;
    };

}

#endif // GASOLINELOCOMOTIVE_H

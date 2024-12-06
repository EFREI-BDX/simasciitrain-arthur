#include "GasolineLocomotive.h"
#include "TypeLocomotive.h"

namespace simasciitrain {

    GasolineLocomotive::GasolineLocomotive()
        : AbstractLocomotive(&TypeLocomotive::GASOLINE) {
    }
}
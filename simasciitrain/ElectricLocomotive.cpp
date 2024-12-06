#include "ElectricLocomotive.h"
#include "TypeLocomotive.h"

namespace simasciitrain {

    ElectricLocomotive::ElectricLocomotive()
        : AbstractLocomotive(&TypeLocomotive::ELECTRIC) {
    }
}

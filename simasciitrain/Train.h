#ifndef TRAIN_H
#define TRAIN_H

#include "ITrain.h"
#include "Wagons.h"
#include "AbstractLocomotive.h"

namespace simasciitrain {

    class Train : public ITrain {
    private:
        Wagons* _wagons;
        AbstractLocomotive* _locomotive;

    public:
        Train(Wagons* wagons, AbstractLocomotive* locomotive);
        ~Train() override;

        private: void print(std::ostream& os) const override;
    };

}

#endif // TRAIN_H

#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H

#include <string>
#include <ostream>
#include "TypeWagon.h"
#include "TrainElement.h"

namespace simasciitrain {

    class AbstractWagon : public TrainElement {
    protected:
        const TypeWagon* _typeWagon;

    public:
        explicit AbstractWagon(const TypeWagon* typeWagon);
        ~AbstractWagon() override = default;

        char getSymbol() const override;
        std::string getType() const override;
        void print(std::ostream& os) const override;
    };

}

#endif // ABSTRACTWAGON_H

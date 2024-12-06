#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H

#include <string>
#include <ostream>
#include "TypeLocomotive.h"
#include "TrainElement.h"

namespace simasciitrain {

    class AbstractLocomotive : public TrainElement {
    protected:
        const TypeLocomotive* _typeLocomotive;

    public:
        explicit AbstractLocomotive(const TypeLocomotive* typeLocomotive);
        ~AbstractLocomotive() override;

        char getSymbol() const override;
        std::string getType() const override;
        private: void print(std::ostream& os) const override;
    };

}

#endif // ABSTRACTLOCOMOTIVE_H

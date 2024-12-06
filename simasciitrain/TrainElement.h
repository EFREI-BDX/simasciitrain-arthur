#ifndef TRAINELEMENT_H
#define TRAINELEMENT_H

#include <string>
#include <ostream>

namespace simasciitrain {

    class TrainElement {
    public:
        virtual ~TrainElement() = default;

        virtual char getSymbol() const = 0;

        virtual std::string getType() const = 0;

        friend std::ostream& operator<<(std::ostream& os, const TrainElement& trainElement) {
            trainElement.print(os);
            return os;
        }

        protected: virtual void print(std::ostream& os) const = 0;
    };

}

#endif // TRAINELEMENT_H
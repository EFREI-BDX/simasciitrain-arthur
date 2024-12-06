#ifndef ITRAIN_H
#define ITRAIN_H
#include <ostream>

namespace simasciitrain {
    class ITrain {
    public:
        virtual ~ITrain() = default;

        virtual void print(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const ITrain& itrain) {
            itrain.print(os);
            return os;
        }
    };
}

#endif // ITRAIN_H

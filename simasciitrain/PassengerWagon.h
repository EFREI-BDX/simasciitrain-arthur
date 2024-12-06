#ifndef PASSENGERWAGON_H
#define PASSENGERWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {

    class PassengerWagon : public AbstractWagon {
    private:
        int _passengerCount_;

    public:
        explicit PassengerWagon(int passengerCount);
        ~PassengerWagon();
        int getPassengerCount() const;
        void setPassengerCount(int passengerCount);
        private: void print(std::ostream &os) const override;
    };

}

#endif // PASSENGERWAGON_H

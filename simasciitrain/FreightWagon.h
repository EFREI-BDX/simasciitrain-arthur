//
// Created by arthu on 06/12/2024.
//

#ifndef FREIGHTWAGON_H
#define FREIGHTWAGON_H
#include "AbstractWagon.h"

namespace simasciitrain {

class FreightWagon : public AbstractWagon{
    private:
    int _freightCount;

    public:
    explicit FreightWagon(int count);
    ~FreightWagon();

    int getFreightCount();
    void setFreightCount(int freightCount);

    private: void print(std::ostream &os) const override;
};

} // simasciitrain

#endif //FREIGHTWAGON_H

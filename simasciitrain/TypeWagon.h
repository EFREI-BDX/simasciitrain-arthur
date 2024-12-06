#ifndef TYPEWAGON_H
#define TYPEWAGON_H

#include <string>

namespace simasciitrain {
    class TypeWagon {
    public:
        static const TypeWagon PASSENGER;
        static const TypeWagon FREIGHT;
        static const TypeWagon UTILITY;

        [[nodiscard]] std::string getName() const;
        [[nodiscard]] char getSymbol() const;

    private:
        std::string _name;
        char _symbol;

        explicit TypeWagon(std::string name, char symbol);

    };
}




#endif //TYPEWAGON_H

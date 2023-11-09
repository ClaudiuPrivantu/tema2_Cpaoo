//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#ifndef TEMA2_IVEHICLE_H
#define TEMA2_IVEHICLE_H

#include <string>

using namespace std;
namespace MyVehicles {
    class IVehicle {
    public:
        //metodele virtuale declarate cu "= 0" indica faptul ca aceasta clasa este o clasa abstracta
        //aceasta clasa abstracta (IVehicle) nu poate fi instantiata direct, serveste drept "schelet" pentru clasele derivate
        //IVehicle defineste o interfata pe care clasele derivate trebuie sa o implementeze
        //toate clasele derivate trebuie sa implementeze metodele virtuale pentru a putea deveni clase concrete
        //prin utilizarea "=0", clasele derivate sunt "fortate" sa implementeze metodele respective
        //daca o clasa derivata nu ofera o implementare pentru o metoda virtuala pura atunci clasa respectiva va deveni la randul ei abstracta
        virtual string getBrand() = 0;

        virtual void setBrand(string brand) = 0;

        virtual int getManufacturingYear() = 0;

        virtual void setManufacturingYear(int year) = 0;

        virtual void toString() = 0;

        virtual void changeInfo(char *info) = 0;
    };
}


#endif //TEMA2_IVEHICLE_H

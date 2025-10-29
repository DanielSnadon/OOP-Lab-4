#pragma once

#include "figure.h"

template <Scalar T>
class Pentagon : public Figure<T> {

    public:

        Pentagon(const Pentagon<T>& other) : Figure<T>() {
            this->amountOfPoints = other.amountOfPoints;
            if (this->amountOfPoints > 0) {
            }
        }
};
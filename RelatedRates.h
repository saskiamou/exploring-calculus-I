#ifndef RELATEDRATES_H
#define RELATEDRATES_H

#include <cmath>
#include <iostream>
#include <iomanip>

class RelatedRates {
public:
    double x, y, t; //base, height, time
    double hypotenuse;
    double d_dx;
    double ladderHeight(double t);
};
#endif
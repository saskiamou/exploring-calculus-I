// c++ includes

#include "RelatedRates.h"

using namespace std;

// autodiff include
#include <autodiff/forward/dual.hpp>
// using namespace autodiff; 

// express position as a function of times
double RelatedRates::ladderHeight(double t) {
    double y = 2;
    double x = 4; // base length * dx * 
    // Pythagorean Theorem: find height (or missing value)
    // ex: y = sqrt(8^2 - s(t)^2)
    double hypotenuse = sqrt(y * y + x * x); 
    double d_dx = hypotenuse * t;
    cout << d_dx;
    return hypotenuse;
}

int main() {
    double t;
    RelatedRates r;

    cin >> t;
    cout << r.ladderHeight(t);
}
// ex: s(t) = 6 + 2tight(t);// Differentiate with Respect to Time (t)

/** Pass t as input auto applies chain rule 
 (dy/dt = dy/dx * dx/dt) -> gives velocity 
 ofpopo top of ladder
*/
 // auto-diff differentiates a function with respect to 
 // time

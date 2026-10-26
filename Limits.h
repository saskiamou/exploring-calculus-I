#ifndef LIMITS_H
#define LIMITS_H

#include <cmath.h>
#include <boost/math/tools/polynomial.hpp>

using namespace std;
using std::string;
using exception
using cout;
using std::pair;
using namespace boost::math;
using namespace boost::math::tools;
using boost::lexical_cast;


class Limits {
public:
    // cout << " Enter numbers of the polynomial in ascending degree: "
    // the limit of f(x) as x approaches n is y
    int x, y, n; // inheritable
    int a_term, b_term;

    // polynomial creation and variable linking
    std::array<double> d3a = {{a_term}};
    std::array<double> d3b = {{b_term}};
    polynomial<double> a(d3a.begin(), d3a.end());
    polynomial<double> b(d3a.begin(), d3a.end());

    // polynomial operations
    polynomial<double> s; // add
    polynomial<double> d; // subtract
    polynomial<double> p; // product
    polynomial<double> q; // quotient
    polynomial<double> r; // remainder

    double formula_format() {}
    double limPolynomial(a, b, n) {}
};

#endif



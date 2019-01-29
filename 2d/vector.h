#ifndef GEOMETRY_2D_VECTOR_H
#define GEOMETRY_2D_VECTOR_H

#include "point.h"

namespace geometry2 {
    struct Vector : Point {
        explicit Vector(const double &_x = 0, const double &_y = 0) {
            x = _x, y = _y;
        }

        Vector(const Point &u, const Point &v) {
            x = v.x - u.x, y = v.y - u.y;
        }

        double dot_product(const Vector &tmp) {
            return x * tmp.x + y * tmp.y;
        }

        double cross_product(const Vector &tmp) {
            return x * tmp.y - tmp.x * y;
        }

        double length() const {
            return sqrt(fac(x) + fac(y));
        }

        Vector operator/(const double &tmp) const {
            return Vector(x / tmp, y / tmp);
        }

        Vector unit() const {
            return *this / this->length();
        }
    };
}

#endif // GEOMETRY_2D_VECTOR_H

#ifndef GEOMETRY_2D_POINT_H
#define GEOMETRY_2D_POINT_H

#include "../util.h"

namespace geometry2 {
    struct Point {
        double x, y;

        explicit Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

        Point(const Point &tmp) { x = tmp.x, y = tmp.y; }

        double dist(const Point &tmp) const {
            return sqrt(fac(x - tmp.x) + fac(y - tmp.y));
        }

        Point operator-(const Point &tmp) const {
            return Point(x - tmp.x, y - tmp.y);
        }
    };
}

#endif // GEOMETRY_2D_POINT_H

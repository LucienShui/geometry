//
// Created by lucien on 1/29/19.
//

#include "geometry2.h"
#include <cstdio>

int main() {
    using vector = geometry2::Vector;
    vector vec(1, 2);
    printf("%lf %lf\n", vec.x, vec.y);
    vector unit = vec.unit();
    printf("%lf %lf\n", unit.x, unit.y);
    return 0;
}

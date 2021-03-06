//
// Created by diana on 2/14/17.
//

#ifndef GPU_TRIANGLE_H
#define GPU_TRIANGLE_H

#include <string>
#include <vector>
#include "point.h"
#include "color.h"

struct triangle {
    const point<float> *v1, *v2, *v3;
    point<float> norm;
    float shade;
    color colour;

    triangle(std::string verts, const std::vector<point<float>> &points);

    void normal();

    void throw_shade(const point<float> &lighting);

    color fade_color();
};


#endif //GPU_TRIANGLE_H

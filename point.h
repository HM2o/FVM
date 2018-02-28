/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   point.h
 * Author: h2mo
 *
 * Created on February 28, 2018, 2:50 PM
 */

#ifndef POINT_H
#define POINT_H

#include <vector>

#include "vector.h"

namespace simo {
class point : public vector {
public:
    point() : vector() {}
    point(double x_) : vector(x_) {}
    point(double x_, double y_, double z_) : vector(x_,y_,z_) {}
    point(const vector& orig) : vector(orig) {}
    point(const vector& A,const vector& B) : vector(A,B) {}

    
    virtual ~point() {}
};

typedef point face;
}
typedef std::vector<simo::point> faces;

#endif /* POINT_H */


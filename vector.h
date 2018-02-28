/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vector.h
 * Author: h2mo
 *
 * Created on February 28, 2018, 2:29 PM
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <cmath>
#include <iostream>

#define LOG(x) std::cout << x << std::endl
namespace simo {

class vector {
public:
    vector() : x(0) , y(0) , z(0) {}
    vector(double x_) : x(x_) , y(0) , z(0) {}
    vector(double x_, double y_, double z_) : x(x_) , y(y_) , z(z_) {}
    vector(const vector& orig) : x(orig.x) , y(orig.y) , z(orig.z) {}
    vector(const vector& A, const vector& B) : x(B.x-A.x) , y(B.y-A.y) , z(B.z-A.z) {}
    virtual ~vector() {}

    inline double norm2() const {
        return std::sqrt(x*x+y*y+z*z);
    } 
    
    inline void   normalize()   {
        double norm = norm2();
        x/=norm; y/=norm; z/=norm;
    }
    
    friend std::ostream& operator << (std::ostream& os, const vector& other) {
        os << other.x << " " << other.y << " " << other.z << '\n';
        return os;
    }
    
    inline vector operator+(const vector& other) {
        return vector(x+other.x,y+other.y,z+other.z);
    }
    
    inline vector operator-(const vector& other) {
        return vector(x-other.x,y-other.y,z-other.z);
    }
    
    inline vector operator*(double other) {
        return vector(x*other,y*other,z*other);
    }
    
    inline vector operator/(double other) {
        return vector(x/other,y/other,z/other);
    }
    
    double x, y, z;
};

}

#endif /* VECTOR_H */


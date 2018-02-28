/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cell.h
 * Author: h2mo
 *
 * Created on February 28, 2018, 2:59 PM
 */

#ifndef CELL_H
#define CELL_H

#include "point.h"

namespace simo {    

class cell {
public:
    cell() : left_f(), center(), right_f() {}
    cell(vector l, vector c, face r) : left_f(l), center(c), right_f(r) {}
    cell(vector l, vector r) : left_f(l), center((l+r)/2), right_f(r) {}
    
    //cell(const cell& orig) {}
    virtual ~cell() {}
    
    void setCellValue(double c) {cell_value=flux_left=flux_right=c;}       
    
    inline double Area() const {(static_cast<vector>(right_f)-static_cast<vector>(left_f)).norm2();}
    
    
    friend std::ostream& operator << (std::ostream& os, const cell& c) {
        os << "Left: "    << c.left_f;
        os << "Center: "  << c.center;
        os << "Right: "   << c.right_f;
    }
        
    face    left_f, right_f; // coordinates of left/right faces
    vector  center;          // coordinates of cell-center  
    double flux_left, flux_right, cell_value = 0.0;
};

}

#endif /* CELL_H */


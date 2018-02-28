/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   field.h
 * Author: h2mo
 *
 * Created on February 28, 2018, 3:35 PM
 */

#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include "cell.h"

class Problem {
public:
    static double constexpr X_0 = 0.0;
    static double constexpr X_e = 100.0;
    static double constexpr C   = 50.0;
    static int    constexpr N_e = 100.0;
};

namespace simo {
    
class field  : public std::vector<simo::cell> {
public:
    
    typedef std::vector<simo::face>::iterator field_iterator;
    
    field()  {this->init();}
    
    inline void init() {
        double DX = (Problem::X_e-Problem::X_0)/Problem::N_e;
        for (int i = 0; i < Problem::N_e; i++) {
            simo::vector  left_(Problem::X_0+i*DX);    
            simo::vector right_(Problem::X_0+(i+1)*DX);
           
            cell c(left_,right_);
           
            c.setCellValue(0.0);
            this->push_back(c);
   
            }                
    }
         
    field_iterator begin() {return this->begin();}
    field_iterator   end() {return   this->end();}
    
    void InitialCondition(){
            
    }
    
    virtual ~field() {}

};

}

#endif /* FIELD_H */


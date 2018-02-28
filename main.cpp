/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: h2mo
 *
 * Created on February 28, 2018, 2:28 PM
 */

#include "vector.h"
#include "point.h"
#include "cell.h"
#include "field.h"


int main(int argc, char** argv) {



    simo::field f;
    
    for (int i = 0; i < f.size(); i++) {
        std::cout << f[i];
    }


    return 0;
}


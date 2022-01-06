//
//  PA1_Q1_Func.cpp
//  
//
//  Created by Nick Hardy on 10/7/21.
//
#include "PA1_Q1_Main.hpp"

void calcDist(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int a, b, c;
    float minDist;
    
    a = y2 - y1; //
    b = x1 - x2; // finding a b and c for the standard form of a line
    c = (a * x1) + (b *y1); //
    
    minDist = abs(a * x3 + b * y3 +c) / sqrt(a * a + b * b); //equation to calculate minimum distance from standard form line
    
    std::cout<< "The shortest distance for ("<<x3<<","<<y3<<") to the line composed of (" <<x2<< ","<<y2<< ") and ("<<x2<<","<<y2<<") is "<<std::to_string(minDist)<<std::endl; //output
}

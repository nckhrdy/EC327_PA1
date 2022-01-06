
//
//  PA1_Q1_Func.cpp
//  
//
//  Created by Nick Hardy on 10/7/21.
//
#include "PA1_Q1_Main.hpp"
using namespace std;

void calcDist(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float deltx, delty, minDist,yint, slope, recip, pval, px, py;
    
    delty = y1 - y2; //calculating value of delta y
    deltx = x1 - x2; // finding value of delta x
    slope = delty/deltx;// slope = delta y / delta x
    recip = - 1/slope;//the reciprical of the slope
    yint = y1 - slope*x1;//the y intercept with the slope and (x1,y1)
    pval = y3 - (recip * x3);
    px = (pval - yint) / (slope - recip);
    py = (slope * px) + yint;
    
    minDist = sqrt((px-x3) * (px-x3) + (py-y3) * (py-y3)); //equation to calculate minimum distance from standard form line
    
    cout<< "The shortest distance for ("<<x3<<","<<y3<<") to the line composed of (" <<x1<< ","<<y1<< ") and ("<<x2<<","<<y2<<") is "<<minDist<<endl; //output
}

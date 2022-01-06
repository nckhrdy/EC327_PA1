//
//  PA1_Q1_Main.cpp
//  
//
//  Created by Nick Hardy on 10/7/21.
//
#include "PA1_Q1_Main.hpp"

using namespace std;

void calcDist(int, int, int, int, int, int);
float minDist;

int main()
{
    int x1,y1,x2,y2,x3,y3; //insitializing variables
    
    cout << "Enter three x y coordinates: " << endl; //prompting for user inputs
    cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    calcDist(x1, y1, x2, y2, x3, y3); //function call
    
    return 0;
}



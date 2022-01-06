//
//  PA1_Q3_Func.cpp
//  
//
//  Created by Nick Hardy on 10/10/21.

#include "PA1_Q3_Main.hpp"

int calcHam(int val1, int val2)
{
    int xorResult, hamDist; //initialize variables
    hamDist = 0;
    
    xorResult = (val1 ) ^ (val2 ); //xor calculation --> dividing by 16 to put it into hex
    
    while ( xorResult > 0 ) // as long as value doesnt equal zero, run through and increment ham dist calulator
    {
        hamDist+=xorResult & 1;
        xorResult >>= 1; //running through each value stored in val1^val2
    }
    return hamDist;
}

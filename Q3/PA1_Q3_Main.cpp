//
//  PA1_Q3_Main.cpp
//  
//
//  Created by Nick Hardy on 10/10/21.
//

#include "PA1_Q3_Main.hpp"
using namespace std;

int calcHam(int, int);

int main()
{
    int val1, val2; //inialize variables
    
    cout<<"Enter two positive integers: "; //promprt user for inputs
    cin>>val1;
    cin>>val2;
    
    cout<<"The hamming distance between "<<val1<<" and "<<val2<<" when the numbers are in hex format is: "<<calcHam(val1,val2)<<endl; //final output and funciton call
    
    
    
    return 0;
}

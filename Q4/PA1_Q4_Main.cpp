//
//  PA1_Q4_Main.cpp
//  
//
//  Created by Nick Hardy on 10/10/21.
//
#include "PA1_Q4_Main.hpp"

bool isNum(string inputVal) //function to check if the inputed value is a number and not a character value
{
    for (int i = 0; i < inputVal.length(); i++) //loop through inputVal
    {
        if (isdigit(inputVal[i]) == false) //if not a n8umber return false and the go to end of code
            return false;
    }
    return true; //if no characters were found jump to the rest of the code to check for palindrome
}

int main()
{
    char inputVal[20]; // initializing inputVal array
    int notPal = 0;
    
    cout<<"Enter a number: "; //prompt user for input
    cin>>inputVal;
    
    if ( isNum(inputVal) ) //function call and if true, proceed, if false jump to error
    {
        int size = strlen(inputVal); //determining the length of what user ented
        
        for( int i=0; i < size; i++) //loop through user entry
        {
            if(inputVal[i] != inputVal[size-i-1]) //working from the edges in, if the two values dont match then automatically the value is not a palindrome
            {
                notPal = 1;
                break; // jump outside of greater if
            }
        }
        
        if ( notPal ) // if true, output that user entry is not a palondrome
        {
            cout<<"The number "<<inputVal<<" is not a palindrome"<<endl;
        }
        else //if notPal is false, output that the user entry is a palindrome
        {
            cout<<"The number "<<inputVal<<" is a palindrome"<<endl;
        }
    }
    
    cout<<"False: not a valid input"<<endl; //"error" message
    
    return 0;
}

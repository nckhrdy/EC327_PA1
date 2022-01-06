//
//  PA1_Q5_Main.cpp
//  
//
//  Created by Nick Hardy on 10/10/21.
//

#include "PA1_Q5_Main.hpp"

int main()
{
    char input, newChar; //initializing variables
    int offset;
    
    cout<<"Enter a character: "; // prompt for user input
    cin>>input; //read input
    cout<<"Enter a positive integer(enter 0 to convert case): ";
    cin>>offset;
    
    if (offset == 0 ) //if the desired offsert is zero then change the case of the input
    {
        if ( isupper(input) ) //check the case of the input, if its upper, change to lower
        {
            newChar = tolower(input);
        }
        else //else, change input case to upper
        {
            newChar = toupper(input);
        }
    }
    else //if the offset is not zero
    {
        newChar = input + offset; // the new character is the sum of the origional plus the offset
    }
    
    if ( newChar > 127 || newChar < 0 ) //determining the bounds of the ascii library values (cannot be a negative and 127 is the largest value for 'DEL'
    {
        cout<<"ERROR - the desired offset is out of bounds"<<endl; //if out of bounds, display error
    }
    else //else, output the new character
    {
        cout<<"New Character: "<<newChar<<endl;
    }
    
    return 0;
}

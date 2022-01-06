//
//  PA1_Q2_Main.cpp
//  
//
//  Created by Nick Hardy on 10/7/21.
//
#include "PA1_Q2_Main.hpp"

using namespace std;

int main()
{
    int rock = 0;
    int paper = 1;
    int scissors = 2;
    int choice, randNum;
    
    cout<<"Choose Rock(0) Paper(1) Scissors(2):";
    cin>>choice;
    
    srand (time(NULL)); //planting seed
    randNum = rand() % 2; // randum number between 0 and 2
     
    
    //run through each possible scenario and output of won or lost
    if (randNum == 0 && choice == 1)
    {
        cout<<"You win!!"<<endl;
    }
    else if (randNum == 0 && choice == 2)
    {
        cout<<"You Lose!!"<<endl;
    }
    else if (randNum == 1 && choice == 0)
    {
        cout<<"You Lose!!"<<endl;
    }
    else if (randNum == 1 && choice == 2)
    {
        cout<<"You Win"<<endl;
    }
    else if (randNum == 2 && choice == 0)
    {
        cout<<"You Win!!"<<endl;
    }
    else if (randNum == 2 && choice == 1)
    {
        cout<<"You Lose!!"<<endl;
    }
    else
    {
        cout<<"Its a tie!!"<<endl;
    }
    
    return 0;
}

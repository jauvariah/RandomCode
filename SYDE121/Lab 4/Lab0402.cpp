//*********************************************
// Student Name: Shuai (Tom)
// Student Number: 20339943
//
// SYDE 121 Lab: 04 Assignment: 02
//
// Filename: Lab0402.cpp
// Date submitted: October 9, 2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#include <iostream>

using namespace std;

int main(){
    
    //Initializing user input, and resulted factorial 
    int userInput = 0;
    int factorial = 1;
    
    //The while loop will keep asking users for valid input if the input is not a positive integer.
    while (userInput <= 0){
          cout << "Please enter a positive integer for factorial calculation: \n";
          cin >> userInput; 
    };
    
    //The for loop will calculate the factorial of the number the user input. 
    for (int i = 1; i <= userInput; i++){
        factorial = factorial * i;
        };
    
    //Output display
    cout << "Factorial is :" << factorial << "\n";
    
    system("PAUSE");
    return 0;
    }

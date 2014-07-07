//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943                          
//
// SD 121 Lab: 08 Assignment: 01
//
// Filename: sum.cpp
// Date submitted: November 17, 2013
//
// I hereby declare that this code, submitted
// for credit for the course SD121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// has not been knowingly plagiarized by others.
//
// Signed,
//
//
//*********************************************

#include "sumtwonums.h"

//Declare max size as a global constant 
const int MAX_SIZE = 20;

int main ()
{
    // Declare arrays of max size 20. Declare Boolean program
    int num1[MAX_SIZE];
    int num2[MAX_SIZE];
    int sum[MAX_SIZE];
    
    bool quitProgram = false;
    bool overflow = false;
    

    do
    {
         // RESET VARIABLES
         
         overflow = false; // re-set overflow boolean
      
         // re-set arrays
         numInit(num1, MAX_SIZE); 
         numInit (num2, MAX_SIZE); 
         numInit (sum, MAX_SIZE); 
         
         getNum (num1, MAX_SIZE, quitProgram);
         // get num1 array, and check for exit code

         if (quitProgram == false)
         {  // only runs if exit code not entered
         
              // display num1
              cout << "The first number is: ";
              printNum(num1, MAX_SIZE, overflow);
              cout  << endl;
              
              getNum(num2, MAX_SIZE, quitProgram);
              // get num2 array, and check for exit code
         
         }

         if (quitProgram == false)
         {  // only runs if exit code not entered

              // display num2
              cout << "The second number is: ";
              printNum(num2, MAX_SIZE, overflow);
              cout  << endl;

              // find sum
              addNum(num1, num2, sum, MAX_SIZE, overflow); 
              cout << endl << endl;
              
              // display sum
              printNum(sum, MAX_SIZE, overflow);
              cout << endl << endl;
         }
    } while (quitProgram == false); // exit the loop if exit code entered

    system ("PAUSE");
    
    return 0;
}


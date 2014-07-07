//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943
//
// SYDE 121 Lab: 04 Assignment: 04
//
// Filename: Lab0404.cpp
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
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    
    //Response is not set to 0 to avoid both random number being 0.
    int response = -2;
    int questionsAnswered = 0;    //counter for questions answered
    int onTheFirstTry = 0;        //counter for questions answered correctly on the first try
    
    cout << "Enter -1 at any time to exit the program. \n \n";
    while (response != -1){
          
          srand(time(0));
          
          int firstNumber = rand() % 9;
          int secondNumber = rand() % 9;
          int trial = 0;           //counter for number of trials
          
          //While the response is incorrect nor is it -1, the user will be prompted again.
          while (response != firstNumber * secondNumber && response != -1){
                cout << "How much is " << firstNumber << " times " << secondNumber << "? \n";
                cin >> response;
                trial++;
          }
          
          //Determining whether response is correct on first trial
          if (trial == 1){
             onTheFirstTry++;
          }
          
          questionsAnswered++;
    }
    //Output the counts
    cout << "\n You have anwsered " << onTheFirstTry - 1 << " correctly on the first try, out of " << questionsAnswered - 1 << " questions. \n";
    
    system("PAUSE");
    return 0;

}

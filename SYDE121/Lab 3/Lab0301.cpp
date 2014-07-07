//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943
//
// SYDE 121 Lab: 03 Assignment: 01
//
// Filename: Lab0301.cpp
// Date submitted: October 2, 2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#include <iostream>
#include <math.h>

using namespace std;

int main(){
     
     int inputSeconds = 0;
     
     while (inputSeconds <= 0){
           cout << "Please enter a positive integer for the number of seconds to be converted. \n";
           cin >> inputSeconds;
     };
     
     double weeks = floor(inputSeconds / 604800);
     double days = floor(inputSeconds % 604800 / 86400);
     double hours = floor(inputSeconds % 604800 % 86400 / 3600);
     double minutes = floor(inputSeconds % 604800 % 86400 % 3600 / 60);
     double seconds = floor(inputSeconds % 604800 % 86400 % 3600 % 60);
     
     cout << "There are \n" 
          << weeks << " weeks, \n"
          << days << " days, \n"
          << hours << " hours, \n"
          << minutes << " minutes, \n"
          << seconds << " seconds, \n"
          << "in " << inputSeconds << " seconds. \n";
     
     system("PAUSE");
     return 0;
     
};

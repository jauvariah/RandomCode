//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943                          
//
// SD 121 Lab: 08 Assignment: 01
//
// Filename: sumtwonums.h
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

# ifndef sumtwonums
# define sumtwonums

  #include <iostream>
  #include <cmath>
  
  using namespace std;
  
  void numInit (int num[], const int maxSize);
  
  void getNum (int num[], const int maxSize, bool &quitProgram);
  
  bool validChar (const char character, bool &quitProgram);
  
  int convertChar (const char character);
  
  void addNum (const int num1[], const int num2[], int sum[], const int maxSize, bool &overflow);
  
  void printNum (const int num[], const int maxSize, const bool overflow);
        
# endif

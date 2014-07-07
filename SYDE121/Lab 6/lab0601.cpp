//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943
//
// SYDE 121 Lab: 06 Assignment: 01
//
// Filename: Lab0601.cpp
// Date submitted: November 1, 2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

//The userPrompt function will ask users for coefficient values a, b, and c, and return them in a double array.
complex <double> * userPrompt(){

  static complex <double> valueStoredArray[3] = {0, 0, 0};

  cout << "This program will help you solve quadratic equations in the form of ax^2 + bx + c = 0." << endl
       << "Please enter a: ";
  cin >> valueStoredArray[0];

  cout << "Please enter b: ";
  cin >> valueStoredArray[1];

  cout << "Please enter c: ";
  cin >> valueStoredArray[2];

  return valueStoredArray;

}

//rootsCalculation takes in three parameters, the coefficient a, b, and c, and return then in a double array.
complex <double> * rootsCalculation(complex <double> a, complex<double> b, complex <double> c){

  static complex <double> calculatedRoots[2] = {(0,0),(0,0)};

  calculatedRoots [0] = (-b + sqrt( pow(b,2) - 4*real(a)*real(c) ) ) / (2*real(a));
  calculatedRoots [1] = (-b - sqrt( pow(b,2) - 4*real(a)*real(c) ) ) / (2*real(a));

  return calculatedRoots;
}



//displayRoots takes in the first root and second root, and output them in cout statements. 
void displayRoots(complex <double> firstRoot, complex <double> secondRoot){

  cout << "The first root is " << real(firstRoot) << " + " << imag(firstRoot) << "i." << endl
       << "The second root is " << real(secondRoot) << " + " << imag(secondRoot) << "i." << endl;

}

int main(){
  
  //coefficients array will store all the coefficients, calling userPrompt function.
  complex<double> * coefficients = userPrompt();

  //roots array will store all the roots, calling rootsCalculation function.
  complex <double> * roots = rootsCalculation(coefficients[0], coefficients[1], coefficients[2]);
  
  //Finally, these values are displayed.
  displayRoots(roots[0], roots[1]);

  system("PAUSE");
  return 0;

}



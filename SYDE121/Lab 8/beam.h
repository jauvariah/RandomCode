//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943                          
//
// SD 121 Lab: 08 Assignment: 02
//
// Filename: beam.h
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

# ifndef beam
# define beam

  #include <iostream>
  #include <cmath>
  
  using namespace std;
  
  const double ELASTICITY = 200e6; // kiloNewtons / m2
  const double INERTIA = 8.3e-6; // m4
  const double LOAD = 100.0; // kN / m
  const double LENGTH = 1.0; // m
  const double PI = 4.0*atan(1.0);
  const double EPSILON = 1e-30; // tolerance
  const int STEPS = 10;
  
  double calculateDeflection(double position);
  double calculateBendingMoment(double x);
  double calculateDerivative ();
  
  void arrayInit(int array[], const int maxSize)
  void printArray(double array[]);
  
     
# endif

//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943
//
// SYDE 121 Lab: 03 Assignment: 03
//
// Filename: Lab0303.cpp
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
#include <cmath>

using namespace std;

double celciusToFahrenheit (double celcius){
       return celcius * 9 / 5 + 32;
       };

double fahrenheitToCelcius (double fahrenheit){
       return (fahrenheit - 32) * 5 / 9;
       };


double kphToMph (double kilometersPerHour){
       return kilometersPerHour * 0.6215;
       };

int main(){
    double windSpeed = 0.0;
    double airTemperature = 0.0;
    double windChillIndex = 0.0;
    
    cout << "Please enter wind speed in kilometers per hour. \n";
    cin >> windSpeed;
    
    cout << "Please enter air temperature in celcius. \n";
    cin >> airTemperature;
    
    airTemperature = celciusToFahrenheit(airTemperature);
    windSpeed = kphToMph(windSpeed);
    
    if (windSpeed <= 4){
       windChillIndex = airTemperature;
    }else if (windSpeed <= 45){
       windChillIndex = 91.4 - (10.45 + 6.69 * sqrt(windSpeed) - 0.447 * windSpeed) * ((91.4-airTemperature) / 22.0);
    }else{
       windChillIndex = 1.6 * airTemperature - 55.0;
    };
    
    cout << "The wind chill index is " << fahrenheitToCelcius(windChillIndex) << "\n";
    
    system("PAUSE");
    return 0;
    }

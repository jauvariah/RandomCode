//********************************************* 
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943
// 
// SYDE 121 Lab: 02 Assignment: 02 
// 
// Filename: Lab0202.cpp 
// Date submitted: September 25, 2013
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
    
    int currentNumberOfEmployees = 0;
    double percentageJunior = 0.00;
    double percentageSenior = 0.00;
    
    cout << "How many employees are currently in the company? \n";
    cin >> currentNumberOfEmployees;
    
    cout << "What is the percentage of junior engineers? (Unit:%) \n";    
    cin >> percentageJunior;
    
    cout << "What is the percentage of senior engineers? (Unit:%) \n";
    cin >> percentageSenior;
    
    double percentageAdministrative = 100.00 - percentageJunior - percentageSenior;
    
    double numberOfJunior = currentNumberOfEmployees * percentageJunior / 100;
    double numberOfSenior = currentNumberOfEmployees * percentageSenior / 100;
    double numberOfAdministrative = currentNumberOfEmployees * percentageAdministrative / 100;
    
    double boxOfPencilsRequired = ceil((numberOfJunior * 10 + numberOfSenior * 7 + numberOfAdministrative * 2)/25);
    double boxOfPensRequired = ceil((numberOfJunior * 5 + numberOfSenior * 5 + numberOfAdministrative * 10)/10);
    double boxOfErasersRequired = ceil((numberOfJunior * 3 + numberOfSenior * 2 + numberOfAdministrative * 1)/10);
    
    cout << "Your company will require " << boxOfPencilsRequired << " boxes of pencils. \n"
         << boxOfPensRequired << " boxes of pens. \n"
         << boxOfErasersRequired << " boxes of erasers. \n";
    
    system("pause");
    return 0;
    
    };

//********************************************* 
// Student Name: Shuai (Tom) Sun 
// Student Number: 20339943 
// 
// SYDE 121 Lab: 01 Assignment: 01 
// 
// Filename: Lab0103.cpp 
// Date submitted: September, 18, 2013 
// 
// I hereby declare that this code, submitted 
// for credit for the course SYDE121, is a product 
// of my own efforts. This coded solution has 
// not been plagiarized from other sources and 
// as not been knowingly plagiarized by others. 
// 
//*********************************************

//filename: lab0103.cpp 

#include <iostream> 
using namespace std; 

bool isSquareRoot (int possibleSquareNum, int possibleRootNum){
     if (possibleRootNum * possibleRootNum == possibleSquareNum){
        return true;
     }else{
        return false;
     }
}

bool isSquare (int possibleRootNum, int possibleSquareNum){
     if (isSquareRoot(possibleSquareNum, possibleRootNum)){
        return true;
     }else{
        return false;
     }
}


int main( ) 
{ 
    int firstNumber = 0;
    int secondNumber = 0;
 cout << "Please enter the first number" << endl;
 cin >> firstNumber;
 cout << "Please enter the second number" << endl;
 cin >> secondNumber;
 
 if (isSquareRoot(firstNumber, secondNumber)){
     cout << "The first number is the square, second number is square root." << endl;
 }else if(isSquare(firstNumber, secondNumber)){
     cout << "The first number is the square root, second number is square." << endl;
 }else{
     cout << "No squares." << endl;
 }
 system("PAUSE");
 return 0; 
}

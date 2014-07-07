//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943
//
// SYDE 121 Lab: 04 Assignment: 01
//
// Filename: Lab0401.cpp
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

int main() {
    
    //Initializing the points
    int xu1 = 0;
    int yu1 = 0;
    int xu2 = 0;
    int yu2 = 0;
    int xv1 = 0;
    int yv1 = 0;
    int xv2 = 0;
    int yv2 = 0;
    int operation = 0;
    
    //Gathering input for u and v vectors
    cout << "2-Dimentional Vector Operations. \n"
         << "Vector u has components U1 and U2. \n"
         << "Vector v has components V1 and V2. \n \n"
         << "Please enter the components for u. \n"
         << "First enter U1 as two integers: ";
    cin >> xu1 >> yu1;
    cout << "Now enter U2 as two integers: ";
    cin >> xu2 >> yu2;
    
    cout << "Please enter the components for v. \n"
         << "First enter the V1 as two integers: ";
    cin >> xv1 >> yv1;
    cout << "Now enter V2 as two integers: ";
    cin >> xv2 >> yv2;
    
    //Simply displaying the values
    cout << "You have entered: \n"
         << "U1 = (" << xu1 << ", " << yu1 << ") \n"
         << "U2 = (" << xu2 << ", " << yu2 << ") \n"
         << "V1 = (" << xv1 << ", " << yv1 << ") \n"
         << "V2 = (" << xv2 << ", " << yv2 << ") \n \n"
         << "The Vectors u and v are: \n"
         << "u = " << xu2 - xu1 << "*i + " << yu2 - yu1 << "*j \n"
         << "v = " << xv2 - xv1 << "*i + " << yv2 - yv1 << "*j \n";
    
    //This will keep running until user enters -1 for operation
    while (operation != -1){
        
        cout << "\n Select a vector operation to perform: \n"
             << "1: u + v (adition) \n"
             << "2: u x v (cross product) \n"
             << "3: u . v (dot product) \n"
             << "Enter 1-3 from the menu above, or -1 to exit. \n";
        cin >> operation;
    
        switch (operation){
               case 1:
                    cout << "u + v = " << (xu2 - xu1) + (xv2 - xv1) << "*i + " << (yu2 - yu1) + (yv2 - yv1) << "*j \n";
                    break;
               case 2:
                    cout << "u x v = " << (xu2 - xu1) * (yv2 - yv1) - (yu2 - yu1) * (xv2 - xv1) << "\n";
                    break;
               case 3:
                    cout << "u . v = " << (xu2 - xu1) * (xv2 - xv1) + (yu2 - yu1) * (yv2 - yv1) << "\n";
                    break;
               default:
                    break;
               }
    }
    
    system("PAUSE");
    return 0;
}

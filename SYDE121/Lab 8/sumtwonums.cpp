//*********************************************
// Student Name: Shuai (Tom) Sun
// Student Number: 20339943                          
//
// SD 121 Lab: 08 Assignment: 01
//
// Filename: sumtwonums.cpp
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


#include "sumtwonums.h" //Import header file

//Function initializes array to max size
void numInit (int num[], const int maxSize)
{
     for (int i = 0; i <= (maxSize - 1); i++)
     {
         num[i] = 0;
     }
}

//Function that prompts for user input
void getNum (int num[], const int maxSize, bool &quitProgram)
{
     int numSize = 0;
     char character = 'a';

     do
     {
         cout << "Please enter the number of digits of desired integer. \n"
              << "Number of digits must be between 0 and " << maxSize << ". Enter -1 to exit program. \n";
         cin >> numSize;
         
         if (numSize == -1)
         {
             quitProgram = true;
             numSize = 1;
         }//Quit program when user wants to exit
     } while (numSize < 1 || numSize > maxSize);
       // Do while loop to ensure user enters valid input.

     // This part will get each digit
     if (quitProgram == false)
     {
          cout << "Please enter the " << numSize << " digit integer, "
               << "one digit at a time. \n"
               << "(Enter a number between 0 and 9, and enter q to exit.) \n";
          for (int i = (numSize - 1); i >= 0 && quitProgram == false; i--)
          {
              do{
                cout << "Digit #" << numSize - i << ": ";
                    do {
                        character = cin.get();
                    }while (character == '\n' || character == ' ');
              }while (validChar(character, quitProgram) == false && quitProgram == false); 
         
              num[i] = convertChar(character); // transfer char into array
         }
         
         character = cin.get();
         
         if (character != '\n' && character != ' ')
         {
               cout << "Digits entered exceeded max size. Program will exit automatically. \n";
               system ("PAUSE");
               exit (1);
         }

     }
}
  
bool validChar (const char character, bool &quitProgram)
{    
     if (character == 'q' )
     {
         quitProgram = true;
         return false;
         
     } else if ( character == '0' || character == '1' || character == '2' || character == '3' 
          || character == '4' || character == '5' || character == '6' || character == '7'
          || character == '8' || character == '9' ) // valid input
     {
         return true;
         
     } else
     {
         return false;
     }
}

int convertChar(const char character)
{
    switch (character)
    {
           case '0':
                return 0;
                break;
           case '1':
                return 1;
                break;
           case '2':
                return 2;
                break;
           case '3':
                return 3;
                break;
           case '4':
                return 4;
                break;
           case '5':
                return 5;
                break;
           case '6':
                return 6;
                break;
           case '7':
                return 7;
                break;
           case '8':
                return 8;
                break;
           case '9':
                return 9;
                break;
           default:
                break;
    }
}

void addNum (const int num1[], const int num2[], int sum[], const int maxSize, bool &overflow)
{
     
     for (int i = maxSize - 1; i >= 0; i--)
     {
         sum[i] += num1[i] + num2[i]; // get digit sum
         
         if ((i + 1) >= (maxSize - 1) && sum[i] >= 10)
             overflow = true; // checks for overflow
         else
         {
             sum[i + 1] += sum[i] /10;
             sum[i] %= 10; // increase next digit if more than 10
         }
     }
     
}
void printNum (const int num[], const int maxSize, const bool overflow)
{
     // VARIABLE DECLARATION
     int digitSum = 0;
     
     // DISPLAY RESULTS
     
     if (overflow == false) // when there is no overflow
     {
          cout << "The sum of two numbers is: ";

          for (int i = maxSize - 1; i >= 0; i--)
          {
              digitSum += num[i]; // find digit sum
         
              if (digitSum!= 0) // ignore leading zeroes
              {
                   cout << num[i]; // output digits
         
                   if ( i % 3 == 0 && i != 0 )
                        cout << ",";  // prints comma
                        
              } else if ( digitSum == 0 && i == 0 )
                   cout << num[0]; // output only one zero
           }
      } else
           cout << "Integer Overflow!"; // there is an overflow
           
      cout << endl;
}

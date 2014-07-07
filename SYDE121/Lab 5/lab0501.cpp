#include <iostream>

using namespace std;

int main(){
  int rowCount = 0;

  //Using the while loop to keep asking the user if given an invalid number. Not a loop for printing diamond.
  while (rowCount % 2 == 0 || rowCount <= 3 || rowCount >=19){
    cout << "Please Enter an odd number between 3 and 19 for the number of rows within the diamond: \n";
    cin >> rowCount;
  }
  
  for (int i = 1; i <= rowCount; i+=2){
    for (int j = 1; j <= floor(rowCount / 2); j++){
      cout << " ";
    } 
    cout << "*"*i;
  }
  system("PAUSE");
  return 0;
}

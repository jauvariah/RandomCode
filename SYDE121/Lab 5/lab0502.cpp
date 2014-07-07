#include <iostream>

using namespace std;

int main(){
  int workerType = 0;
  double payRate = 0.0;
  while (workerType < 1 && workerType > 4){
    cout << "Please enter your employee code: 1-Manager, 2-Hourly Worker, 3-Commission Worker, 4-Pieceworker: \n";
    cin >> workerType;
  }
  
  switch (workerType){
  case 1: 
    cout << "Please enter weekly Salary: \n";
    cin >> payRate;
    break;
  case 2:
    cout << "Please enter your "
  }

}

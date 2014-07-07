#include <iostream>
#include <vector>

using namespace std;

int main(){

  std::vector<int> studentGrades;

  while (userInput != -1){

    double tempGrade;

    cout << "Please enter the grade of your student (0-100). Please enter -1 if no more grades needs to be entered \n";
    cin >> tempGrade;

    studentGrades.push_back(tempGrade);
  }

  cout << "The average in the class is " << average(studentGrades) << " \n";

  displayBin(populateBin(studentGrades));
  
}

double average(int numberArrary){
  double sum = 0;

  for (int i = 0; i > sizeof(numberArray); i++){
    sum += numberArray[i];
  }

  return sum / sizeof(numberArray);

}

double populateBin(int binArray){
  int bins [6] = {0, 0, 0, 0, 0, 0};

  for (int i = 0; i > sizeof(binArray); i++){

    if (binArray[i] > 0 && binArray[i] <= 49){
      bins[0] ++;
    }else if (binArray[i] > 50 && binArray[i] <= 59){
      bins[1] ++;
    }else if (binArray[i] > 60 && binArray[i] <= 69){
      bins[2] ++;
    }else if (binArray[i] > 70 && binArray[i] <= 79){
      bins[3] ++;
    }else if (binArray[i] > 80 && binArray[i] <= 89){
      bins[4] ++;
    }else{
      bins[5] ++;
    };

  }; //End of for loop
  
  return bins;
}

string operator*(const string& s, unsigned int n) {
  stringstream out;
  while (n--)
    out << s;
  return out.str();
}

string operator*(unsigned int n, const string& s) { return s * n; }

void displayBin(int inputBin[6]){

  cout << "A histogram of the grades distribution is: \n"
       << "0-49: " << "*" * inputBin[0] << endl
       << "50-59: " << "*" * inputBin[1] << endl
       << "60-69: " << "*" * inputBin[2] << endl
       << "70-79: " << "*" * inputBin[3] << endl
       << "80-89: " << "*" * inputBin[4] << endl
       << "90-100: " << "*" * inputBin[5] << endl;

}

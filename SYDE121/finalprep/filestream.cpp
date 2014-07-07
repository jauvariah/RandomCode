#include <iostream>
#include <fstream>

ifstream in_stream;

in_stream.open("Filename.txt");

if(in_stream.fail()){
  cout << "Input file opening failed. " << endl;
  exit(1);
}

if(! in_stream.eof()){ //end of statement
  //do something.

}


int main(){
  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("infile.dat");
  out_stream.open("outfile.dat");

  in first, second, third;
  in_stream >> first >> second >> third;
  out_stream >> "the sum of the first three items are " << (first + second + third) << endl;
}

if (fin.fail()){
  cout << "Error opening file";
  exit(EXIT_FAILURE);

}

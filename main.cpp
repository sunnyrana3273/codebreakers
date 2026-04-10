#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  cout << "Hello World" << endl;
  
  fstream inputFile("test.txt");
  
  if (!inputFile.is_open()){
    cout << "Error opening file.";
  } else {
    string line;

    while (getline(inputFile, line)){
      cout << line;
    }
  }
  
  

  return 0;
}


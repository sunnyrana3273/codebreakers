#include <iostream>
#include <fstream>
#include <string>
#include "letter.h"
#include "main_test.h"

using namespace std;

int main(){
  string sent = readFile("test.txt");
  string password = "key";

  cout << sent << endl;

  cout << testC(sent) << endl;

  cout << testR(sent) << endl;

  cout << testV(sent, password) << endl;
}



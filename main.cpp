#include <iostream>
#include <fstream>
#include <string>
#include "letter.h"
#include "main_test.h"

using namespace std;

int main(){
  string sent = readFile("test.txt");
  string password = "key";
  
  testC(sent);
  testR(sent);
  testV(sent, password);
}



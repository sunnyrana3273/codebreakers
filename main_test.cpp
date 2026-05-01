#include <iostream>
#include <string> 
#include <cctype>
#include <fstream>
#include "letter.h"

using namespace std;

string readFile(string fileName){
  string res;

  ifstream file(fileName);
  
  string line;
  while(getline(file, line)){
    res += line;
  }

  file.close();

  return res;
}

void testC(string sent){
  string enc, dec;
  
  cout << "Original phrase: "<< sent << endl;

  for (char letter : sent){
    enc += encodeC(letter);
  }

  cout << "Encoded C phrase: " << enc << endl;

  for (char letter : enc){
    dec += decodeC(letter);
  }

  cout << "Decoded C phrase: " << dec << endl;
}


void testR(string sent){
  string enc, dec;

  cout << "Original phrase: " << sent << endl;

for (char letter : sent){
    enc += encodeR(letter);
  }

  cout << "Encoded R phrase: " << enc << endl;

  for (char letter : enc){
    dec += decodeR(letter);
  }

  cout << "Decoded R phrase: " << dec << endl;
}


void testV(string sent, string password){
  string noSpace = removeSpace(sent);
  string extPassword = extendStr(noSpace, password);
  string enc, dec;

  cout << "Original phrase: " << sent << endl;

  cout << "Original password: " << password << endl;

  cout << "Truncated phrase (no space): " << noSpace << endl;

  cout << "Truncated password: " << extPassword << endl;
  
  for (int i = 0; i < noSpace.length(); i++){
    enc += encodeV(noSpace[i], extPassword[i]); 
  }

  cout << "Encoded V phrase : " << enc << endl;

  for (int i = 0; i < enc.length(); i++){
    dec += decodeV(enc[i], extPassword[i]);
  }

  cout << "Decoded V phrase: " << dec << endl;
}





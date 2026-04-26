#include <string>
#include "letter.h"
#include <cctype>

using namespace std;

char encodeC(char letter){
    char res;
    int shift = 3;
    int reset;
   
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
   
    res = (char) (((letter - reset) + shift) % 26) + reset;
    return res;
}

char decodeC(char letter){
    char res;
    int shift = 3;
    int reset;
   
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
    res = (char) (((letter - reset) - shift + 26) % 26) + reset;
    return res;
}

char encodeR(char letter, int shift){
    char res; 
    int reset;
   
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
   
    res = (char) (((letter - reset) + shift) % 26) + reset;
   
    return res;
}

char decodeR(char letter, int shift){
    char res;
    int reset;
   
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
   
    res = (char) (((letter - reset) - shift + 26) % 26) + reset;
   
    return res;
}

char encodeV(char letter, char key){
    char res;
    char reset;
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
   
    int shift = key - reset;
   
    res = (char) (((letter - reset) + shift) % 26) + reset;
   
    return res;
}

char decodeV(char letter, char key){
    char res;
    char reset;
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
   
    int shift = key - reset;
   
    res = (char) (((letter - reset) - shift + 26) % 26) + reset;
   
    return res;
}

void lenManip(string phrase, string key){
    if (key.length() > phrase.length()){
        int diff = key.length() - phrase.length();
        key = key.substr(0, key.length() - diff);
    } else if (key.length() < phrase.length()) {
        int keyLen, count;
        keyLen = key.length();
        count = 0;
        while (key.length() < phrase.length()){
            if (count > keyLen){
                count = 0;
            }
           key += key[count];
           count++;
        }
    }
}


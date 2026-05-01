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

char encodeR(char letter){
    char res;
    int shift = 13;
    int reset;
   
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
   
    res = (char) (((letter - reset) + shift) % 26) + reset;
   
    return res;
}

char decodeR(char letter){
    char res;
    int shift = 13;
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
    char tempReset;
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
    
    if (islower(key)){
        tempReset = 'a';
    } else {
        tempReset = 'A';
    }
   
    int shift = key - tempReset;
 
    res = (char) (((letter - reset) + shift) % 26) + reset;
   
    return res;
}

char decodeV(char letter, char key){
    char res;
    char reset;
    char tempReset;
    
    if (islower(letter)){
        reset = 'a';
    } else {
        reset = 'A';
    }
    
    if (islower(key)){
        tempReset = 'a';
    } else {
        tempReset = 'A';
    }
   
    int shift = key - tempReset;
    
    res = (char) (((letter - reset) - shift + 26) % 26) + reset;
   
    return res;
}

string extendStr(string phrase, string key){
    string temp;
   
    if (key.length() > phrase.length()){
        int diff = key.length() - phrase.length();
        temp = key.substr(0, key.length() - diff);
    } else if (key.length() < phrase.length()) {
        int keyLen, count;
        keyLen = key.length() - 1;
        count = 0;
        while (temp.length() < phrase.length()){
            if (count > keyLen){
                count = 0;
            }
           temp += key[count];
           count++;
        }
    }
   
    return temp;
}

string removeSpace(string phrase){
    string res;
   
    int right, left;
    left = 0;
    right = 0;
   
    while (left <= right && right <= phrase.length()){
        if (phrase[right] == ' ' || right == phrase.length()){
            int diff = right - left;
            string temp = phrase.substr(left, diff);
            res += temp;
            left = right + 1;
        }
        right++;
    }
   
    return res;
}

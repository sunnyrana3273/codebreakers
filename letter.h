#include <string>
using namespace std;

char encodeC(char letter);
char decodeC(char letter);
char encodeR(char letter, int shift);
char decodeR(char letter, int shift);
char encodeV(char letter, char key);
char decodeV(char letter, char key);
void lenManip(string phrase, string key);

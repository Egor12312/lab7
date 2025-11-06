/**************************
 * Автор: Устинов Егор    *
 **************************/
 
#include <fstream>
#include <iostream>
#include <set>
#include <string.h>

using namespace std;
 
int main() {
  char line[100];
  ifstream fin("123.txt");
 
  fin.getline(line, 100);
  fin.close();
    
  int lineLength = strlen(line);
  set <char> plenty;
  int fixesTheFirstLetter, count, currentVariable;
  for(fixesTheFirstLetter = 0; fixesTheFirstLetter < lineLength; ++fixesTheFirstLetter) {
    plenty.insert(line[fixesTheFirstLetter]);
  }
    
  for(fixesTheFirstLetter = 0; fixesTheFirstLetter < lineLength; ++fixesTheFirstLetter) {
    count = 0;
    if (plenty.find(line[fixesTheFirstLetter]) != plenty.end()) {
        for(currentVariable = 0; currentVariable < lineLength; ++currentVariable) {
            if(line[fixesTheFirstLetter] == line[currentVariable]) ++count;
        }
            plenty.erase(line[fixesTheFirstLetter]);
            printf("%c   %d\n", line[fixesTheFirstLetter], count);
    }
  }
    
    return 0;
}

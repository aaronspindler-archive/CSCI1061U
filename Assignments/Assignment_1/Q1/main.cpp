#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc,char** argv){

  int numLines = -1;
  int numWords = 0;
  int numBytes = -1;

  if(argc < 2){
    cout << "\x1b[31;1m" << "Error:" << endl
    << "Please pass a filename as a program parameter! Correct use: wc *.txt" << "\x1b[39;49m" << endl;
    return -1;
  }else if(argc > 2){
    cout << "\x1b[31;1m" << "Error:" << endl
    << "You are passing too many arguments. Correct use: wc *.txt" << "\x1b[39;49m" << endl;
    return -2;
  }

  string fileName = string(argv[1]);

  ifstream fin;
  fin.open(fileName.c_str());

  char c;
  while (!fin.eof()){
    fin.get(c);
    if(c == '\n'){
      numLines++;
    }else if(isspace(c)){
      numWords++;
    }
    numBytes += 1;
  }
  cout << "\t" << numLines << "\t" << numWords << "\t" << numBytes << "\t" << fileName << endl;
  return 0;
}

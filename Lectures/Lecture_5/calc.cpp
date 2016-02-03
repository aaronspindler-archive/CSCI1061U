using namespace std;

#include <iostream>
#include <stdlib.h>

int main(int argc, char** argv){
  if(argc != 4){
    cout << "Error: Command Line Arguments Incorrect" << endl;
    return -1;
  }

  float num1 = atof(argv[2]);
  float num2 = atof(argv[3]);

  if(argv[1][0] == '+'){
    float result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
  }else if(argv[1][0] == '-'){
    float result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
  }else if(argv[1][0] == '/'){
    float result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
  }else if(argv[1][0] == '*'){
    float result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
  }
}

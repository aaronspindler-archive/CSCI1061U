#include "Buffer.h"
#include "Stack.h"
#include "StackInt.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  Buffer buf("Hello");
  cout << buf << endl;

  // Writing to a file
  ofstream outfile;
  outfile.open("out.txt");
  cout << "Written = " << buf.write(outfile) << endl;
  outfile.close();

  // Reading from a file
  ifstream infile;
  infile.open("out.txt");
  cout << "Read = " << buf.read(infile) << endl;
  infile.close();
  cout << buf << endl;

  // Increasing is size
  buf.resize(10);
  cout << buf << endl;

  // Decreasing its size
  buf.resize(2);
  cout << buf << endl;

  // Reading some other stuff - upto the size of the buffer
  infile.open("in.txt");
  cout << "Read = " << buf.read(infile) << endl;
  infile.close();
  cout << buf << endl;

  // The stack class
  Stack s;
  s.push('1');
  s.push('2');
  s.push('3');
  s.push('4');
  cout << s << endl;

  // Lets check if our pop() method is working okay
  cout << s.pop() << endl;
  cout << s << endl;

  // Time to see if Stack is saved to the file correctly
  outfile.open("out-stack.txt");
  cout << "Written = " << s.write(outfile) << endl;
  outfile.close();

  // And now read a Stack from the file
  Stack s2;
  infile.open("out-stack.txt");
  cout << "Read = " << s2.read(infile) << endl;
  infile.close();
  cout << s2 << endl;

  // Lets add something to the stack that we read from the file
  s2.push('5');
  cout << s2 << endl;

  // And now we play with StackInt
  StackInt s3;
  s3.push(1);
  s3.push(2);
  s3.write(cout);
  cout << endl;
  cout << s3.pop() << endl;

  return 0;
}

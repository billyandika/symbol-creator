#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char** argv)
{
  // Args checking
  if(argc != 4) {
    cerr << "./symbolcreator called with incorrect arguments." << endl;
    cerr << "Usage: ./symbolcreator 256 1000 outfile" << endl;
    return -1;
  }
  
  // Bounds checking
  bool errflag = false;
  if(stoi(argv[1]) < 1 || stoi(argv[1]) > 256) {
    cerr << "Number of symbols must be between 1 and 256 inclusive." << endl;
    errflag = true;
  }
  if(stoi(argv[2]) < 1 || stoi(argv[2]) > 500000) {
    cerr << "Number of reps must be 1 or more (max. 500000). " << endl;
    errflag = true;
  }
  if(errflag) return -1;

  int numSymbols = stoi(argv[1]);
  int rep = stoi(argv[2]);

  ofstream out(argv[3], ios::binary);
  for(int r=0; r<rep; r++) {
    for(int i=0; i<numSymbols; i++) {
      char ch = (char)i;
      out.write((char*)&ch, sizeof(char));
    }
  }

  out.close();
  return 0;
}

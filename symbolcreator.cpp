#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char** argv)
{
  if(argc != 4)
  {
    cerr << "./symbolcreator called with incorrect arguments." << endl;
    cerr << "Usage: ./symbolcreator 256 1000 outfile.dat" << endl;
    return -1;
  }
  int numSymbols = stoi(argv[1]);
  int rep = stoi(argv[2]);

  ofstream out(argv[3], ios::binary);
  for(int r=0; r<rep; r++)
  {
    for(int i=0; i<numSymbols; i++)
    {
      char ch = (char)i;
      out.write((char*)&ch, sizeof(char));
    }
  }

  out.close();
  return 0;
}

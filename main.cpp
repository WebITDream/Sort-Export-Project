#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
  ifstream ifs("text.txt");

    ofstream exportFile;
    exportFile.open("export.txt");

  string word1 = "/bukr";
  string word2 = "/napoleon";
  string word3 = "/rve-tm";
  string word4 = "/rve-or";
  string word5 = "/rveOR";
  string word6 = "rve-tm";
  string word7 = "rveTM";
  string word8 = "rve-beta";

  string line;

  while( getline(ifs, line ))
  {
    size_t pos = line.find(word1);
    if ( pos != string::npos)
      exportFile << line << endl;

    size_t pos1 = line.find(word2);
    if ( pos1 != string::npos)
      exportFile << line << endl;

          size_t pos2 = line.find(word3);
    if ( pos2 != string::npos)
      exportFile << line << endl;
      
          size_t pos4 = line.find(word4);
    if ( pos4 != string::npos)
      exportFile << line << endl;

          size_t pos5 = line.find(word5);
    if ( pos5 != string::npos)
      exportFile << line << endl;

          size_t pos6 = line.find(word6);
    if ( pos6 != string::npos)
      exportFile << line << endl;

          size_t pos7 = line.find(word7);
    if ( pos7 != string::npos)
      exportFile << line << endl;

          size_t pos8 = line.find(word8);
    if ( pos8 != string::npos)
      exportFile << line << endl;

  }
}

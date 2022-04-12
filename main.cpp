#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void openFile(ifstream&, string);
void processFile(ifstream&);

int main(){
// Initializare proiect
    ifstream file;
    openFile(file, "text.txt");

    // procesare fisier;
    processFile(file);
}

void processFile(ifstream& file){
    string line, word;
    istringstream iss;

    // string keyword[22] = {"anicacjtm", "bukr", "cityhome", "IC", "insula", "interviu", "msb", "napoleon", "radu", "rveOR", "rve-or",
    //  "rve-beta", "rvesb", "rveTM", "rve-tm", "omma", "pcma", "pima", "vnma"};


    while(!file.eof()){
        getline(file, line);
// Ia fiecare linie si imparte in cuvinte
        iss.clear();
        iss.str(line);
            while(iss.good()){
                iss >> word;
                // verificarea daca este X cuvant, daca este se afiseaza
                if(word == "napoleon" || word == "rve-tm" || word == "rveOR" || word == "bukr" || word == "rveor"){
                    cout << word << endl;
                }
            }

    }
}



void openFile(ifstream& file, string fname){
    file.open(fname);
    if (file.is_open()){
        
    }else {
        cout << "Ceva nu a mers" << endl;
        exit(-1);
    }
}

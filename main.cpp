#include <iostream>
#include <sstream>
#include <fstream>
#include <ctime> 

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

    string keyword[24] = {"anicacjtm", "/bukr", "/napoleon", "bukr", "cityhome", "IC", "insula", "interviu", "msb", "napoleon", "radu", "rveOR", "rve-or", "rve-beta", "rvesb", "rveTM", "rve-tm", "omma", "pcma", "pima", "vnma", "/rveOR", "/rve-or", "/rve-tm"};

    ofstream exportFile;
    exportFile.open("export.txt");

    while(!file.eof()){
        getline(file, line);
// Ia fiecare linie si imparte in cuvinte

        iss.clear();
        iss.str(line);
            while(iss.good()){
                iss >> word;
                // verificarea daca este X cuvant, daca este se afiseaza
                for(int i=0;i<=22;i++)
                    if(word == keyword[i]){
                        exportFile << word << endl;
                    }
                }
            }
            time_t tmNow = time(0);
            char *dt = ctime(&tmNow);
            exportFile << "Data si timpul cand a fost efectuat raportul: " << dt << endl;
            cout << "Apasa orice tasta pentru a parasii executabilulul, rezultatul il poti gasi in fisierul: export.txt !";
            cin.get();
}



void openFile(ifstream& file, string fname){
    file.open(fname);
    if (file.is_open()){
        
    }else {
        cout << "Ceva nu a mers" << endl;
        exit(-1);
    }
}
#include <iostream>
#include <string>
using namespace std;

class Mahasiswa 
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printALL();

    static void setNim(int pNim) {nim = pNim;}
    static int getNim() {return nim;}

    Mahasiswa(string pnama):nama(pnama)
    {
        setID();
    }
};

int Mahasiswa::nim=100;

#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public :
    int nim;
    string nama;
    //constructor 1
    Mahasiswa()
    {
        nim =0;
        nama="Irza";
    };
    //constructor 2
    Mahasiswa( int iNim)
    {
        nim =iNim;
    };
    //constructor 3
    Mahasiswa(string);

    //constructor 4
    Mahasiswa(int iNim,string iNama);


    void cetak(){
        cout << "NIM = " << nim << endl;
        cout << "Nama = " << nama << endl;
        cout << endl;
    }
};

Mahasiswa :: Mahasiswa (string iNama){
    nama = iNama;
}

Mahasiswa :: Mahasiswa(int iNim,string iNama)
    {
    nim = iNim;
    nama =iNama;
    };

int main (){
    Mahasiswa mhs1;
    Mahasiswa mhs2(94);
    Mahasiswa mhs3(94,"Irza");
    Mahasiswa mhs4(94,"Irza");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}

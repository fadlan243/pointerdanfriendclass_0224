#include <iostream>
using namespace std;

class mahasiswa
{
public :
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int maint ()
{

    mahasiswa mhs; // object mhs
    mhs.nim = 2024;
    mhs.showNim(); // Member Access Operator
    
    mahasiswa &refMhs = mhs; // Pointer Reference refMhs
    refMhs.nim = 2;          // Member Access Operatir
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer Dereference pMhs
    pMhs->nim = 3;          // Arrow Operator
    pMhs->showNim();
    return 0;
}
#include <iostream>
using namespace std;

class mahasiswa
{
    public :
    int nim;
    void showNim()
    {
        cout << "No induk = " << endl;
    }
};
int main()
{
    mahasiswa *mhs = new mahasiswa{1}; // pointer objek mhs
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
} 
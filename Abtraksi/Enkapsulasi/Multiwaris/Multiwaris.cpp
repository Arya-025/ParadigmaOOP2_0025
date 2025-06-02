#include <iostream>
using namespace std;

class orang {
    public :
    int umur ;

    orang (int pUmur) :
    umur(pUmur)
    {
        cout << "orang di buat dengan umur" << umur << "\n" << endl;
    }

};

class pekerja : virtual public orang  {
    public:
    pekerja (int pUmur ) : orang (pUmur)
    {
        cout << "pekerja di buat \n" << endl;
    }
};

class pelajar : virtual public orang{
    public:
    pelajar (int pUmur) :
    orang(pUmur)
    {
        cout << "pelajar di buat \n" << endl;
    }
};

class Budi : public pekerja, public pelajar {
    public :
    Budi (int pUmur);
    pekerja (pUmur),
    pelajar (pUmur),
    orang (pUmur) //hal ini dapat di lakukan menggunakan virtual
    {
        cout << "budi di buat \n" << endl;
    }

};

int main(){
    Budi a(12);

    return 0;
}

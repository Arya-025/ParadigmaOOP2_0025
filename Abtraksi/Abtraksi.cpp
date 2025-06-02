#include <iostream>
using namespace std;

class Abstraksiklas {
    private : string x, y;
    //metod untuk mengisi nilai
    //private member
    public :
    void setXY(string a, string b){
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display(){
        cout << "x = "<< x << endl;
        cout << "y = "<< y << endl;
    }
};

int main(){
    Abstraksiklas ak;
    ak.setXY("yogyakarta", "kampus");
    ak.display();

    return 0;
}


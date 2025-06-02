#include <iostream>
using namespace std;


class remotelampu {
    private :
    string saklarNO[10];
    public :
    void setSaklarNO(int i, string value){
        saklarNO [i] = value ;

    }
    string getsaklarNO(int i){
        return saklarNO[i];
    }
};

int main(){
    remotelampu lampurumah;

    lampurumah.setSaklarNO(0, "lampu teras rumah");
    lampurumah.setSaklarNO(1, "lampu ruang tamu");
    lampurumah.setSaklarNO(2, "lampu kamar tidur");
    lampurumah.setSaklarNO(3, "lampu dapur");

    cout << lampurumah.getsaklarNO(0)<< endl;
    cout << lampurumah.getsaklarNO(1)<< endl;
    cout << lampurumah.getsaklarNO(2)<< endl;
    cout << lampurumah.getsaklarNO(3)<< endl;

    return 0;
}
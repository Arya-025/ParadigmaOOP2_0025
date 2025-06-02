#include <iostream>
using namespace std ;

class baseClass{
    public:
    virtual void perkenalan (){
        cout << "hallo saya function dari base class";
    }
};

class darivedClass : public baseClass{
    public :
    void perkenalan (){
        cout << "hallo saya function dari derived Class";
    }
};
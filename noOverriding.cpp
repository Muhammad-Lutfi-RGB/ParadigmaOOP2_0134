#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan() final{
        cout << "Hallo saya function dari base class";
    }
};

class derivedClass : public baseClass {
    public:
    void perkenalan1() {
        cout << "Hallo saya function dari derived Class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan1();

    return 0;
}
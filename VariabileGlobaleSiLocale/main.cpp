#include <iostream>

int varGlobala = 5;

static int varStatGlobala = 6;

namespace vlad
{
    int varInNS = 7;
}

using namespace std;



int main()
{
    int varLocala1 = 8;
    int varLocala2 = 9;
    static int varStatLoc = 10;


    cout << &varGlobala << endl;
    cout << & varStatGlobala << endl;

    using vlad::varInNS;
    cout << &varInNS << endl;

    cout << &varLocala1 << endl;
    cout << &varLocala2 << endl;
    cout<< &varStatLoc << endl;
    return 0;
}

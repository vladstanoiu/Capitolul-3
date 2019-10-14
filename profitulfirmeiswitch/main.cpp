#include <iostream>

using namespace std;

int main()
{
    unsigned int PPP;
        cout << "Introdu numarul " << endl;
        cin >> PPP;
        switch (PPP) {
        case 1 : cout << "Profitul firmei pe trimestrul 1 este 3000 si bilantul pe anul anterior este 8375."; break;
        case 2 : cout << "Profitul firmei pe trimestrul 2 este 5000."; break;
        case 3 : cout << "Profitul firmei pe trimestrul 3 este 4000."; break;
        case 4 : cout << "Profitul firmei pe semestrul 4 este 2500."; break;
        default: cout << "Eroare";

    }
    return 0;
}

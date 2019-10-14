#include <iostream>

using namespace std;

int main()
{
    unsigned int PPP;
    unsigned long bilantAnterior = 8375;

    cout << "Introdu numarul " << endl;
    cin >> PPP;
        if (PPP == 1) {
            cout << "Profitul firmei pe trimestrul 1 este " << 3000 << endl;
            cout << "Bilantul pe anul anterior este " << bilantAnterior << endl;}

                else if ( PPP == 2){
                cout << "Profitul firmei pe trimestrul 2 este "<< 5000 << endl;}

                    else if (PPP == 3){
                    cout << "Profitul firmei pe trimestrul 3 este " << 4000 << endl;}

                        else if (PPP == 4){
                        cout << "Profitul firmei pe semestrul 4 este " << 2500 << endl;}


        else{
            cout << "Eroare " << endl;}















    return 0;
}

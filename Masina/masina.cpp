#include <iostream>

using namespace std;

int main()
{
    unsigned int pret = 7000;
    unsigned int clima = 500;
    unsigned int tractiune = 1000;
    unsigned int scaunePiele = 250;
    unsigned int boxeFataSpate = 125;
    char rasp = 'n';

    cout << "Felicitari pentru ca ati ales Hyundai! Doriti sa adaugati optiuni? (d/n)" << endl;
    cin >> rasp;

        if (( rasp == 'd') || (rasp == 'D')){
        cout << "Buna alegere , sa incepem cu prima: Clima doriti? Pret 500 euro (d/n) " << endl;
        cin >> rasp;
            if (( rasp == 'd') || ( rasp == 'D')){
            pret +=500;
            cout << "Buna alegere , clima a fost adaugata! Pret actual - " << pret <<  endl;

            }else{
            cout << "Nu este nici o problema." << endl;}

                cout << "Urmatoarea optiune: tractiune doriti? Pret 1000 euro (d/n) " << endl;
                cin >> rasp;
                if (( rasp == 'd') || ( rasp == 'D')){
                pret += 1000;
                cout << "Buna alegere , tractiunea a fost adaugata! Pret actual - " << pret <<  endl;
                }else{
                cout << "Nu este nici o problema." << endl;}

                    cout << "Urmatoarea optiune: scaune de piele doriti? Pret 250 euro (d/n) " << endl;
                    cin >> rasp;
                    if (( rasp == 'd') || ( rasp == 'D')){
                    pret += 250;
                    cout << "Buna alegere , scaunele de piele au fost adaugate! Pret actual - " << pret <<  endl;
                    }else{
                    cout << "Nu este nici o problema. " << endl;}

                        cout << "Urmatoarea optiune: Boxe Fata si Spate doriti? Pret 125 euro (d/n) " << endl;
                        cin >> rasp;
                        if (( rasp == 'd') || ( rasp == 'D')){
                        pret += 125;
                        cout << "Buna alegere , scaunele de piele au fost adaugate! Pret actual - " << pret <<  endl;
                        }else{
                        cout << "Nu este nici o problema." << endl;}

                        cout << "Pretul final este " << pret << endl;
        }else{
        cout << "Nu este nici o problema, ramane pretul standard - " << pret << " de euro " << endl;}
    return 0;
}

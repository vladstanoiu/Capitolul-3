#include <iostream>

using namespace std;

int main()
{
    int vlad;
    void* pntVlad;
    pntVlad = &vlad;
    *static_cast <int*>(pntVlad)= 60;

    cout << "Variabila este: " << vlad << endl;
    cout << "Variabila prin Void este: " << *static_cast<int*>(pntVlad) << endl;
    return 0;
}

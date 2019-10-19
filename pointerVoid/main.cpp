#include <iostream>

using namespace std;

int main()
{
    int vlad;
    void* pntVlad;
    pntVlad = &vlad;
    static_cast <int*>(pntVlad);

    cout << "Variabila este: " << pntVlad << endl;
    cout << "Variabila prin Void este: " << static_cast<int*>(pntVlad) << endl;
    return 0;
}

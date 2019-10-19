#include <iostream>

using namespace std;

int main()
{
   unsigned short ident1 , ident2 , identSuma , identProdus;

    unsigned short *pntident1 = &ident1;
    unsigned short *pntident2 = &ident2;
    unsigned short *pntidentSuma = &identSuma;
    unsigned short *pntidentProdus = &identProdus;

    *pntident1 = 4;
    *pntident2 = 6;
    *pntidentSuma = *pntident1 + *pntident2;
    *pntidentProdus = *pntident1 * *pntident2;

    cout << "pntIdentSuma este: " << *pntidentSuma << "; pntIdentProdus este:  " << *pntidentProdus << ";" << endl;
    return 0;
}

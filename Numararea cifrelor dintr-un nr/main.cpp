#include <iostream>

using namespace std;

int main()
{
    int NR;
   int i=0;

   cin >> NR;
   while (NR != 0)
   {
       NR = NR / 10;
       i++;
   }
   cout<< "Are " << i << " cifre";
    return 0;
}

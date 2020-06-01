//C++ program to access the elements of array using pointers

#include <iostream>
using namespace std;

int main()
{
   int element[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> element[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(element + i);

   return 0;
}

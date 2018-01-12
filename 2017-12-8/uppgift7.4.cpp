
#include <iostream>
using namespace std;

int main()
{
int val;
cout << "Välj en av följande färdmedel" << endl;
cout << "1. Bil" << endl;
cout << "2. Cykel" << endl;
cout << "3. Buss" << endl;
cout << "4. Tåg" << endl;

cin >> val;

switch (val)
{


case 1:
 cout << "Du har valt bil som ditt färdmedel" << endl;
  break;
 
  case 2:
 cout << "Du har valt cykel som ditt färdmedel" << endl;
  break;
  
  case 3:
 cout << "Du har valt buss som ditt färdmedel" << endl;
  break;
  
  case 4:
 cout << "Du har valt tåg som ditt färdmedel" << endl;
  break;
 
}
  
return 0;
}                       
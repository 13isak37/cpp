// Isak Larsson, uppgift 2

#include <iostream>
#include <iomanip>


using namespace std;
int main()
{

 float tal1;
 float tal2;
 float tal3;
 float medel;
 
 cout << "Mata in tre flyttal" << endl; // vi skriver ut vad anv�ndaren ska mata in
 
 cin >> tal1 >> tal2 >> tal3;  // anv�ndaren f�r mata in vaflria float tal
 
 cout << "Tal 1: " << tal1  << endl; // utskrift av vilka talanv�ndaren har valt
 cout << "Tal 2: " << tal2  << endl;
 cout << "Tal 3: " << tal3  << endl;
  
medel = (tal1 + tal2 + tal3)/3; // medelv�rdet r�knas ut

cout << "Medelv�rdet av " << tal1 << ", " << tal2 << " och " << tal3 << " blir " << fixed << setprecision(1) << medel << endl; // resultatet skrivs ut
  

return 0;
}
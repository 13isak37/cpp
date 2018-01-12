#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  setlocale(  LC_ALL, "");
  
  double tal1, tal2, tal3;
  
  cout << "mata in 3 tal: ";
  cin >> tal1 >> tal2 >> tal3;
  
  double summa = tal1 + tal2 + tal3; 
  double medel = summa / 3;
  
  cout << "Summa: " << fixed << setprecision(2) << summa << endl;
  cout << "Medel: " << fixed << setprecision(2) << medel << endl;
  
  
  
  
  return 0;
}

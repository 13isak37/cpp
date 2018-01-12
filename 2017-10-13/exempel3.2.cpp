
#include <iostream>

using namespace std;
int main()
{
  
  double tid[] = {9.98, 10.15};
  cout << "Fältet innehåller följande tider" << endl;
  cout << tid[0] << "\t" << tid[1] << endl;
 
  double tmp;
  
  // Algoritm för byta plats på 
  // två värden i ett fält
  tmp = tid[0];
  tid[0] = tid[1];
  tid[1] = tmp;
  
  
  cout << "Fältet innehåller följande tider" << endl;
  cout << tid[0] << "\t" << tid[1] << endl;




return 0;
}
  
 




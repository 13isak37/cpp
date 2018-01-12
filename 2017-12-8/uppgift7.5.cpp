
#include <iostream>
using namespace std;

int main()
{

  int tal1;
  int tal2;
  char raknesatt;
  
  cout << "Mata in två tal" << endl;
  cin >> tal1 >> tal2;
  cout << "Välj räknemetod (+/-)" << endl;
  cin >> raknesatt;
  int summa = (raknesatt == '+' )? tal1 + tal2 : tal1 - tal2;
  cout << summa << endl;
  
  
  
  
return 0;
}                       
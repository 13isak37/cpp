
#include <iostream>
using namespace std;


int main()
{
  
int tal1, tal2, steg;

cout << "Min: "; cin >> tal1;
cout << "Max: "; cin >> tal2;
cout << "Steglängd: "; cin >> steg;

for (int n = tal2 ; n > tal1 ; n = n - steg )
{
  cout << n << ' ';
}

  
  
  
return 0;
}                       
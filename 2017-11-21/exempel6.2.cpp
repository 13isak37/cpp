// exempel 6.2 sidan 74


#include <iostream>

using namespace std;
int main()
{

int tal1;
int tal2;

cout << "Ange tal 1" << endl; // Läs in två tal, tal1 & tal2
cin >> tal1;


cout << "Ange tal 2" << endl; 
cin >> tal2;
// om tal1 är större än tal2, 
// skriv ut tal1
// annars
//skriv ut tal2

if (tal1 > tal2)
{
  cout << tal1 << endl;
  
  
}

else 
{
cout << tal2 << endl;  
}

  
  

  
 

return 0;
}                       
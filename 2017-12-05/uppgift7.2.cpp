
#include <iostream>
using namespace std;

int main()
{

int avstand;
cout << "ditt avstånd till arbetet (km)" << endl;
cin >> avstand;

if (avstand <= 50)
{
  
cout << "Du har inte rätt till skatteavdrag" << endl;  
  
}

else
{
  char civilstand;
  cout << "Sambo eller ensamstående? (s/e)" << endl;
  cin >> civilstand;
  int ar;
  cout << "Hur länge kommer din dubbla bosättning att vara?" << endl;
  cin >> ar;
}

if ( ( (civilstand = 's') && ( ar<=3) ) )
{
  
  cout << "du har rätt till skatteavdrag" << endl; 
  
}




  
return 0;
}                       

#include <iostream>

using namespace std;
int main()
{
  
  char falt[]={'g','r','a','n','\0'};
  cout << falt[0] << falt[1] << falt[2] << falt[3] << endl;
  cout << falt << endl;
  // Rad 13: Ett teckenf�lt med 8 platser skapas
  // 'J','U','L','G','R','A','N', \0'
  char nyfalt[]="Julgran";
  cout << nyfalt << endl; //stoppar n�r '\0' hittas


return 0;
}
  
 





#include <iostream>
using namespace std;

int main()
{

char kon;

  cout << "Vad har du för kön? (k/m)" << endl;
  
  cin >> kon;
  
  cout << "Du är en " << (kon != 'm' ? "kvinna." : "man.");
  
 
  
return 0;
}                       
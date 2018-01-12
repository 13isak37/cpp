
#include <iostream>

using namespace std;

int main()
{
 float langd;
 float vind;
cout << "ange längden och vindstyrkan" << endl;
cin >> langd >> vind;

if ((langd > 7.92) && (vind < 2.0))
  cout << "grattis du har slagit nytt rekord" << endl;

else {

  cout << "sorry bror inget rekord" << endl;
}
  
  
  
return 0;
}                       
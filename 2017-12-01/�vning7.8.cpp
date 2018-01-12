
#include <iostream>
#include <string>
using namespace std;

int main()
{
 
cout << "Namn 1" << endl;
string namn1;
getline(cin, namn1);

 cout << "Namn 2" << endl;
string namn2;
getline(cin, namn2);

cout << "I bokstavsordning" << endl;
if (namn1 < namn2)
{
  cout << namn1 << endl;
  cout << namn2 << endl;
  
}
else 
{
  cout << namn2 << endl;
  cout << namn1 << endl;
  
  
}
  
  

  
  
return 0;
}                       
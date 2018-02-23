
#include <iostream>
using namespace std;


int main()
{
    setlocale( LC_ALL, "");
    
int falt[8];

for (int n = 0; n < 8; n++)
  falt[n] = n;

int raknare = 0;
  
while (raknare < 8)
{
  cout << falt[raknare] << endl;
  raknare++;
}
      
      
  return 0;
}                       
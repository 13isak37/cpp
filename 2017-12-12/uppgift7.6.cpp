
#include <iostream>
using namespace std;


int main()
{
 
  int mitt = 2;
  int tal;
  int raknare = 1;
  cout << "Gissa mitt hemliga tal (1, 2 eller 3)" << endl;
  cin >> tal;
  
  while(tal !=mitt)
  {
   cout << "du gissade fel, försök igen, försök nr: " << raknare << endl;
   raknare++;
   cin >> tal;
    
  }
  
  cout << "Grattis, du klara de på " << raknare << " försök" << endl;
  
  
  

  
  
  
  
return 0;
}                       

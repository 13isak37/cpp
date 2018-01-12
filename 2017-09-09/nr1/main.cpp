
//inkluderrar "saker som finns i
// biblioteket iostream"
// bl. a. utskrift på skäremen
#include <iostream>

// i en namnrymd ingår
// olika bibliotek. 
// Alla ingående bibliotek har olika namn
using namespace std;

int main()
{
  /*
           cout= "datorns standardenehet,
	   definierat i operativsystemet (skärmen)
	   << är utmatningsoperatorn. (matar ut till
	   skärmen)
   */ 
  cout << "Kod på två rader " ; 
  cout << "\"Men utskrift på en rad\"" <<endl;
  cout << endl;
  cout << "en rad kod," << endl << "utskrift på två" ;
  cout << endl;
  
  return 0;
}

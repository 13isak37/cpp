
//inkluderrar "saker som finns i
// biblioteket iostream"
// bl. a. utskrift p� sk�remen
#include <iostream>

// i en namnrymd ing�r
// olika bibliotek. 
// Alla ing�ende bibliotek har olika namn
using namespace std;

int main()
{
  /*
           cout= "datorns standardenehet,
	   definierat i operativsystemet (sk�rmen)
	   << �r utmatningsoperatorn. (matar ut till
	   sk�rmen)
   */ 
  cout << "Kod p� tv� rader " ; 
  cout << "\"Men utskrift p� en rad\"" <<endl;
  cout << endl;
  cout << "en rad kod," << endl << "utskrift p� tv�" ;
  cout << endl;
  
  return 0;
}

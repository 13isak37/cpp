
#include <iostream>
using namespace std;


int main()
{
    setlocale( LC_ALL, "");
    
    char val;
    int startvarde = 1000;
    bool fortsatt = true;
    
    do 
    {
      cout << "MENY\n";
      cout << "1. insättning\n";
      cout << "2. Uttag\n";
      cout << "3. Visa Behållning\n";
      cout << "4. avsluta programmet\n";
      cin >> val;
   
      
      switch(val)
      {
	case '1':
	  double insattning;
	 cout << "Ange insättning: ";
	 cin >> insattning;
	 startvarde = startvarde + insattning;
	 break;
	 
	case '2':
	  double uttag;
	  cout << "Ange uttag ";
	  cin >> uttag;
	  startvarde = startvarde + uttag;
	  break;
	  
	case '3': 
	  cout << "Behållning: " << startvarde << endl << endl;
	 break;
	 
	case '4':
	  fortsatt = false;
	  break;
	default:
	  cout << "Felinmatning.\n\n";
      }
      
    }
    while (fortsatt );
      
      
      
      
  return 0;
}                       
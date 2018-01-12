
#include <iostream>

using namespace std;

int main()
{
  int behallning = 1000;
  int tal;
  int pengar;
  
 cout << "MENY" << endl;
  cout << "1. insättning" << endl;
   cout << "2. uttag" << endl;
    cout << "3. visa behållning" << endl;
  
    cin >> tal;
   
    switch (tal)
    {
      
      case 1:
	cout << "Hur mycket cash vill du sätta in?";
	int insattning;
	cin >> insattning;
	pengar = insattning + behallning;
	cout << " Nya summan på kontot är " << pengar << "kr ";
	break;
	
	case 2:
	cout << "Hur mycket cash vill du ta ut?";
	int uttag;
	cin >> uttag;
	if (uttag < 1000)
	{pengar = behallning - uttag;
	cout << " Nya summan på kontot är " << pengar << "kr ";}
	
	else {
	  
	  cout << "Du har för lite pengar   ";
	  
	}
	
	break;
	
	
	case 3:
	cout << "Du har " << behallning << "kr på kontot  ";

	break;
      
      
      
	
      
      
      
      
      
      
      
      
      
    }
  
  
return 0;
}                       
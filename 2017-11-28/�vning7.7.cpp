
#include <iostream>

using namespace std;

int main()
{
  int behallning = 1000;
  int tal;
  int pengar;
  
 cout << "MENY" << endl;
  cout << "1. ins�ttning" << endl;
   cout << "2. uttag" << endl;
    cout << "3. visa beh�llning" << endl;
  
    cin >> tal;
   
    switch (tal)
    {
      
      case 1:
	cout << "Hur mycket cash vill du s�tta in?";
	int insattning;
	cin >> insattning;
	pengar = insattning + behallning;
	cout << " Nya summan p� kontot �r " << pengar << "kr ";
	break;
	
	case 2:
	cout << "Hur mycket cash vill du ta ut?";
	int uttag;
	cin >> uttag;
	if (uttag < 1000)
	{pengar = behallning - uttag;
	cout << " Nya summan p� kontot �r " << pengar << "kr ";}
	
	else {
	  
	  cout << "Du har f�r lite pengar   ";
	  
	}
	
	break;
	
	
	case 3:
	cout << "Du har " << behallning << "kr p� kontot  ";

	break;
      
      
      
	
      
      
      
      
      
      
      
      
      
    }
  
  
return 0;
}                       
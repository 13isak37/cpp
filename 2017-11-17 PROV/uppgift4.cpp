// Isak Larsson, uppgift 4

#include <iostream>



using namespace std;
int main()
{


int tim;
int min;
int sek;
  
cout << "Mata in timmar, minuter och sekunder. Använd heltal" << endl; // instruktion till användaren

cin >> tim >>min >> sek; // inamatning av användaren 



cout << "Timmar: " << tim << endl; // utskrifter av användarens inmatningar
cout << "Minuter: " << min << endl;
cout << "Sekunder: " << sek << endl;

int sekunder = sek % 60; 		//uträkning av sekunder
int minuter = min % 60 + sek / 60;      //uträkning av minuter
int timmar = tim + min / 60;            //uträkning av timmar

cout << "Den inamatade tiden motsvaras av " << timmar << " timmar," 
<< minuter << " minuter och " << sekunder << " sekunder" << endl; 	//resultatet skrivs ut 
  

  
return 0;
}
// Isak Larsson, uppgift 4

#include <iostream>



using namespace std;
int main()
{


int tim;
int min;
int sek;
  
cout << "Mata in timmar, minuter och sekunder. Anv�nd heltal" << endl; // instruktion till anv�ndaren

cin >> tim >>min >> sek; // inamatning av anv�ndaren 



cout << "Timmar: " << tim << endl; // utskrifter av anv�ndarens inmatningar
cout << "Minuter: " << min << endl;
cout << "Sekunder: " << sek << endl;

int sekunder = sek % 60; 		//utr�kning av sekunder
int minuter = min % 60 + sek / 60;      //utr�kning av minuter
int timmar = tim + min / 60;            //utr�kning av timmar

cout << "Den inamatade tiden motsvaras av " << timmar << " timmar," 
<< minuter << " minuter och " << sekunder << " sekunder" << endl; 	//resultatet skrivs ut 
  

  
return 0;
}
// Antalet råttor i Kattbo kommun är för närvaranade 100st. 
// Antalet fördubblas varje månad. Hur många månader tar det innan 
// Antalet råttor uppnått 1 miljon
#include <iostream>

using namespace std;


int main()
{

const int MAX_ANTAL = 1000000;
int antal = 100;
int manader = 0;

while (antal < MAX_ANTAL)
{
  manader++;
  antal = antal * 2;
  
}

cout << "Efter " << manader << " hela månader är antalet råttor" << antal << endl;

return 0;
}                       
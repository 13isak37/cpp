//kap. 3 fält
#include <iostream>
// Vi inför string-klassen 
//boken sid 44ff
#include <string>

using namespace std;
int main()
{
  // teckenfält, C-strängar
  // Du bestämmer storleken när 
  // strängen skapas
  // Du måste deklarera den innan den kan användas
  
  char namn[100]; // 0-99
  namn[66] = 'B'; // heltalet 65
  cout << namn[66] << endl;
  char fnamn[] = "Bengt";
  cout << fnamn << endl;
  //char ett_tecken;
  
    char hel[100]; // 0-99
  hel[66] =65; // heltalet 65
  cout << hel[66] << endl;
    //cout << hel << endl;
  //char ett_tecken;
  
  
  string s;
  s = "Marks";
  string s1 = "Gymnasieskola";
   s = s+s1; 
  cout << s << endl;
  s.at(0) = 'P';
  cout << s << endl;
  int antal = s.size();
  cout << antal << endl;
  
  
  // vi söker efter positionen 
  // där gym börjar
  int hitta = s.find("Gym",0);
  cout << hitta << endl;
  // vi plockar ut  tecken ur s
  // med start där "gym" börjar
  // och placerar detta i stringen
  // delstring
  string delstring = s.substr(hitta, 8);
  cout << delstring << endl;

return 0;
}
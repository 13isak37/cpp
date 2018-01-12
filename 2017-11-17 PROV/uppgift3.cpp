// Isak Larsson, uppgift 3

#include <iostream>
#include <string>


using namespace std;
int main()
{

cout << "Mata in din text: " << endl; // Instruktion till användaren

string text;

getline(cin, text); // användaren matar in en text

cout << "Mata in tecken att leta efter: " << endl; // Instruktion till användaren

string tecken;

getline(cin, tecken); // användaren matar in ett tecken

int pos = text.find(tecken, 0); // programmet hittar tecknet

string ut = text.substr(pos, 4); // programmet plockar ut fyra tecken

cout << '"' << ut << '"' << " plockas ut" << endl; // utskrift av resultat

  
  
  
  
  
return 0;
}
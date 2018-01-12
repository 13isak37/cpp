
#include <iostream>
#include <string>


using namespace std;
int main()
{

  string in;
  cin >> in;
      cin.ignore(1000, '\n');
  //klipper vid mellanslag
  cout << in << endl;

  // klipper av vid nyradstecken
  getline(cin, in);
    cout << in << endl;
    
    
    cin.ignore(1000, '\n');
  
  
  
    /*string strang = "Lektionssal";
    cout << strang << endl;
    strang = "kuligt";
    cout << strang << endl;
    int langd = strang.size();
    cout << langd << endl;
    int hitta = strang.find('u',1);
    cout << hitta << endl; */
    
    /*string s = "simpa";
    int hitta = s.find("im",0);
    cout << hitta << endl;
    
    string delstring = s.substr(2,2);
    cout << delstring << endl; */
    
   

return 0;
}
  
 




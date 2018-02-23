
#include <iostream>
using namespace std;


int main()
{
  
  setlocale( LC_ALL, "");
  int folk = 1000000;
  int ar;
  
  while( folk < 2000000 )
  {
    folk = folk * 1.05;
    ar++;
    
  }
  
  cout << "Det tar " << ar << " år innan folkmängden är två miljoner" << endl;
  
return 0;
}                       
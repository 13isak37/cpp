
#include <iostream>
using namespace std;


int main()
{

    setlocale( LC_ALL, "");
    
    int hastighetmeter[8];
    int hastighetkilometer[8];
    
    for( int n = 0 ; n < 8 ; n++ )
    {
      hastighetmeter[n] = 5 * ( n + 1);
      hastighetkilometer[n] = 18 * (n + 1);
      cout << hastighetmeter[n] << "    " << hastighetkilometer[n] << endl;
    }
  
return 0;
}                       
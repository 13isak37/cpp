
#include <iostream>

using namespace std;

int main()
{
  float pris;
  float antal;
  
  cout << "Hur många CDR-skivor önskar du idag bby" << endl;
  cin >> antal;
  
  if (antal < 10)
  { pris = antal * 9.90;
    cout << "det blir " << pris << "kr"  << endl;
    
  }
  
  
    if ((antal > 10) && ( antal < 50))
  { pris = antal * 9.90 * 0.95;
    cout << "det blir " << pris << "kr"  << endl;
    
  }
  
   if ((antal > 50) && ( antal < 100))
  { pris = antal * 9.90 * 0.90;
    cout << "det blir " << pris << "kr"  << endl;
    
  }
  
     if (antal > 100)
  { pris = antal * 9.90 * 0.85;
    cout << "det blir " << pris << "kr"  << endl;
    
  }
  
return 0;
}                       
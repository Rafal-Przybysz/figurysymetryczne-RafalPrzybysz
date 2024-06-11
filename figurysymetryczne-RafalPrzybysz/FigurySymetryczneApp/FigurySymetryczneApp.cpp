#include "../FigurySymetryczne/figurySymetryczne.h"

#define PRINT(x) cout<<#x": "<<(x)<<endl

int main() {
  cout<<"Sprawdzenie klas Prostokat i Trojkat\n";
  while(true) { // Konwersacja
    int a, b;

    cout<<"\nParametry figur: a b = ";
    cin>>a>>b;
    if(!cin || a<=0 || b<=0) break;

    FiguraSymetryczna *fsp = new Prostokat(a, b);
    FiguraSymetryczna *fst = new Trojkat(a, b);
    
    PRINT(fsp->sygnatura());
    PRINT(fsp->pole());
    PRINT(fsp->obwod());

    PRINT(fst->sygnatura());
    PRINT(fst->pole());
    PRINT(fst->obwod());
    
    delete fsp;
    delete fst;
  }
  cout<<"Koniec testowania\n";
}

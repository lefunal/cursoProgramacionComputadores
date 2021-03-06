// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................


int main(void)
{
    int n = 2;
    
     switch(n){
        case 1:
            cout << "n es uno" << endl;
            break;
        case 2:
            cout << "n es dos" << endl;
            break;
        default:
            cout << "n no es ni uno ni dos" << endl;
    } 
    
    system("pause");
    return 0;
}



//....... FIN ...............







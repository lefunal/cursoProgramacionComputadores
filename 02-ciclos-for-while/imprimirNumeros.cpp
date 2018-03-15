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
    int m;
    
    cout << "Con un for: " << endl;
    for(int n = 1; n < 6; n = n + 1){
        cout << n << " ";
    }
    cout << endl;
    
    cout << "Con un while: " << endl;
    m = 1;
    while(m < 6){
        cout << m << " ";
        m = m + 1;
    }
    cout << endl;

    
    cout << "Con un do while: " << endl;
    m = 1;
    do{
        cout << m << " ";
        m = m + 1;
    } while(m < 6);
    cout << endl;

    system ("pause");
    
    return 0;
}

//....... FIN ...............






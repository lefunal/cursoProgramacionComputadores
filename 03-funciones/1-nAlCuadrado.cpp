// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

int alCuadrado(int n);

int main(void)
{
   
    cout << "3 al cuadrado = " << alCuadrado(3) << endl;
    cout << "4 al cuadrado = " << alCuadrado(4) << endl;
        
    system ("pause");
    return 0;
}

int alCuadrado(int n){
    int res = n*n;
    return res;
}

//....... FIN ...............






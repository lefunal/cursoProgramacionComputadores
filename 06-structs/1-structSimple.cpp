// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;
# include <sstream>
using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

struct base_estructura {
    int entero;
    char caracter;
    int *arreglo;
};
typedef base_estructura *estructura;



int main()
{
    // Inicializar estructura
    int arreglo [3] = { 1, 2, 3 };
    
    base_estructura e1;
    e1.entero = 1;
    e1.caracter = 'a';
    e1.arreglo = arreglo;
    
    //Imprimir estructura
    cout << "entero: " << e1.entero << endl;
    cout << "caracter: " << e1.caracter << endl;
    cout << "arreglo: " << endl;
    for(int n = 0; n < 3; n = n + 1 ){
        cout << e1.arreglo[n] << endl;
    }


    system ("pause");
    return 0;
}



//....... FIN ...............




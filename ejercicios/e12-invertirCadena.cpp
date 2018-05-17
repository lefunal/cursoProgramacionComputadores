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


int longitud_parcial(char * cadena);
char * invertir_cadena(char* cadena);


int main()
{
    
    char *cadena = "que dia";
    char *inv;
    
    inv = invertir_cadena(cadena);
    for(int n = 0; n < longitud_parcial(inv); n = n +1){
        cout << inv[n];
    }
    cout << endl;
    
    system ("pause");
    return 0;
}

int longitud_parcial(char * cadena){
    int longitud = 0;
    while(cadena[longitud] != '\0'){
        longitud = longitud + 1;
    }
    return longitud;
}


char * invertir_cadena(char* cadena){
    int longitud = longitud_parcial(cadena);
    char * res = new char[longitud];
    
    for(int n = 0; n < longitud; n = n + 1){
        res[n] = cadena[longitud - 1 - n];
    }
    
    return res;
}


//....... FIN ...............





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
   
     
    int tamanoArreglo = 4;
    bool arreglo [4] = {true, false, true, true};
    
    bool todosSonTrue = true;

    for(int n = 0; n < tamanoArreglo; n = n + 1){
      todosSonTrue = todosSonTrue && arreglo[n];
    }

   
    cout << "¿Todos los valores son True? " << todosSonTrue << endl;
    
    
    system ("pause");
    return 0;
}

//....... FIN ...............


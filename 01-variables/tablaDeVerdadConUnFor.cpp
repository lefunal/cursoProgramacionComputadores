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

    bool A, ANegado;

    bool arregloBool [2] = {true, false};
    cout << "arregloBool[0]= " << arregloBool[0] << endl;
    cout << "arregloBool[1]= " << arregloBool[1] << endl;
    cout << endl;

    cout << "Tabla de !A, (negacion de A)" << endl;
    cout << endl;

    cout << "A | !A" << endl;
    cout << "-------" << endl;

    for(int n = 0; n <= 1; n = n+1){
        A = arregloBool[n];
        ANegado = !A;
        cout << A << " | " << ANegado  << endl;

    }

    system ("pause");
    return 0;
}

//....... FIN ...............

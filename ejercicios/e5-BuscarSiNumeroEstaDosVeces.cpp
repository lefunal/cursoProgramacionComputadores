// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

bool hayDosDosesVecesEnElArreglo();

int main(void)
{

    bool hayDos = hayDosDosesVecesEnElArreglo();
    if(hayDos){
        cout << "hay dos 2 en el arreglo" << endl;
    }
    else{
        cout << "No hay dos 2 en el arreglo" << endl;
    }
    
    system ("pause");
    return 0;
}

bool hayDosDosesVecesEnElArreglo(){
    int arreglo[4] = {1, 2, 3, 2};
    int count = 0;
    
    for(int n = 0; n < 4; n = n + 1){
        if(arreglo[n] == 2){
            count = count + 1;
        }
    }
    
    return (count == 2);
}


//....... FIN ...............





